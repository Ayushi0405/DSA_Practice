#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data1,Node* next1){
        data=data1;
        next=next1;

    }
    public:
    Node(int data1){
        data=data1;
        next=nullptr;
    }
};

Node* convertArr2ll(vector<int> & arr){
    Node* head=new Node{arr[0]};
    Node* mover=head;
    for(int i=1;i<arr.size();i++){
        Node* temp=new Node(arr[i])
        mover->next=temp;
        mover=temp;
    }
    return head;

}
int lengthofLL(Node* head){
    int cnt=0;
    Node* temp=head;
    while(temp){
        
        temp=temp->next;
        cnt++;
    }
    return cnt;
}

int checkIfPresent(Node* head,int val){
    Node* temp=head;
    while(temp){
        if(temp->data==val){
            return 1;

        }
        temp=temp->next;
    }
    return 0;
}
Node* removesHead(Node* head){
    if(head==NULL) return head;
    Node* temp=head;
    head=head->next;
    delete temp;
    return head;
}

Node* Deletetail(Node* head){
    
    if(head==NULL || head->next==NULL) return NULL;
    Node* temp=head;
    while(temp->next->next !=NULL){
        temp=temp->next;
    }
    delete temp->next;
    temp->next=nullptr;

    return head;
}


    int main(){
        vector<int> arr={2,5,8,7};
        Node* head=convertArr2ll(arr);
        Node* temp=head;
        while(temp){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<lengthofLL(head);
        cout<<checkIfPresent(head,15);

    }
