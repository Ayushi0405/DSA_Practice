#include<iostream>
using namespace std;
int Rev(int arr[],int n){
    int start=0;
    int end=n-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    

}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[10]={1,2,33,45,65,443,22,12,45,34};
    Rev(arr,10);
    printArray(arr,10);
    
    return 0;

}