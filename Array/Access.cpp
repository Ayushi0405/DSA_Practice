#include<iostream>
using namespace std;
void PrintArray(int arr[],int size){
    cout<<"Printing the array"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"Printing Done"<<endl;

}
int main(){
    int number[15];
    //accessing an array
    cout<<"vale at 14 index"<<number[14]<<endl;

    //initialising an array
    // int second[3]={2,7,9};
    // cout<<"vale at 2 index"<<second[2]<<endl;

    // int third[15]={2,3};
    int fifth[10]={1};
    int n=15;
    PrintArray(fifth,10);
    int fifthSize=sizeof(fifth)/sizeof(int);
    cout<<"Size of fifth is"<<fifthSize<<endl;
    

}