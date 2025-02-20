#include<iostream>
#include<vector>
using namespace std;
//Node structure for Binary Tree
struct Node{
    int data;
    Node* left;
    Node* right;
    //Constructor to initialize
    Node(int val):data(val),left(nullptr),right(nullptr){}
};

class Solution{
    public:

    bool isleaf(Node* root){
        return !root->left && !root->right;
    }
    void addLeftBoundary(Node* root,vector<int> &result){
        Node* curr=root->left;
        while(curr){
            if(!isleaf(curr)){
                result.push_back(curr->data);
            }
            if(curr->left){
                curr=curr->left;
            }else{curr=curr->right;}
        }
    }
    void addRightBoundary(Node* root,vector<int> &result){
        Node* curr=root->right;
        vector<int> temp;
        if(!isleaf(curr)){
            temp.push_back(curr->data);
        }
        if(curr->right){
            curr=curr->right;
        }else{curr=curr->left;}

        for(int i=temp.size()-1;i>=0;i--){
            result.push_back(temp[i]);
        }
    }

    void LefNodes(Node* root,vector<int> & result){
        if(isleaf(root)){
            result.push_back(root->data);
            return;
        }
        if(root->left){
            LefNodes(root->left,result);

        }
        if(root->right){
            LefNodes(root->right,result);
        }
    }

    vector<int> printBoundary(Node* root){
        vector<int> res;
        if(!root){
            return res;
        }
        if(!isleaf(root)){
            res.push_back(root->data);
        }
        addLeftBoundary(root,res);
        LefNodes(root,res);
        addRightBoundary(root,res);
        return res;
    }
    

};
void printResult(const vector<int>& result){
    for(int val:result){
        cout<<val<<" ";

    }
    cout<<endl;

}






int main() {
    // Creating a sample binary tree
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    Solution solution;

    // Get the boundary traversal
    vector<int> result = solution.printBoundary(root);

    // Print the result
    cout << "Boundary Traversal: ";
    printResult(result);

    return 0;
}
      


