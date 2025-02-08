#include<iostream>
using namespace std;
bool search(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return 1;
        }
        
    }
    return 0;

}
int main(){
    int arr[10]={2,3,6,788,99,12,34,45,23,12};
    cout<<"Enter the element to search for"<<endl;
    int key;
    cin>>key;
    bool found=search(arr,10,key);

    if(found){
        cout<<"key is present"<<endl;
    }else{
    cout<<"Key is absent"<<endl;}
    return 0;
}