#include<iostream>
using namespace std;
int ArraySorted(int arr[],int n){
    for(int i=1;i<n;i++){
        if(arr[i] >= arr[i-1]){

        }
        else{return false;}
    }
    return true;
    
}
int main(){
    int arr[6]={1,23,45,67,89,76};
    int AS=ArraySorted(arr,6);
    cout<<"The Array is "<<AS<<endl;


}