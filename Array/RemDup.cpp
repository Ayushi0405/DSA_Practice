#include<iostream>
using namespace std;
int RemDup(int arr[],int n){
    int i=0;
    for(int j=1;j<n;j++){
        if(arr[i] != arr[j]){
            arr[i+1]=arr[j];
            i++;
        }

    }
    return(i+1);
}
int main(){
    int arr[6]={1,2,3,3,2,2};
    int RD=RemDup(arr,6);
    cout<<"Number of Unique elements are "<<RD<<endl;


}