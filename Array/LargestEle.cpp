#include<iostream>
using namespace std;
int largestElement(int arr[],int n){
    int largest=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    return largest;
}
int main(){
    int arr[6]={1,23,45,67,89,76};
    int LE=largestElement(arr,6);
    cout<<"The largest element is "<<LE<<endl;


}