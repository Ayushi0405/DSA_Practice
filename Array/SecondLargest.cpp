#include<iostream>
#include <climits>
using namespace std;
// int largestElement(int arr[],int n){
//     int largest=arr[0];
//     for(int i=0;i<n;i++){
//         if(arr[i]>largest){
//             largest=arr[i];
//         }
//     }
//     return largest;
// }
// int SecLargestEle(int arr[],int n){
//     int largest=largestElement(arr,n);
//     int seclargest=-1;
//     for(int i=0;i<n;i++){
//         if(arr[i]>seclargest && arr[i] != largest){
//             seclargest=arr[i];
//         }
//     }
//     return seclargest;
// }
int SecLargest(int arr[], int n){
    int largest=arr[0];
    int slargest=-1;
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            slargest=largest;
            largest=arr[i];

        }
        else if(arr[i]<largest && arr[i]>slargest){
            slargest=arr[i];

        }
    }
    return slargest;

}

int Secsmallest(int arr[],int n){
    int smallest=arr[0];
    int secsmallest=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<smallest){
            secsmallest=smallest;
            smallest=arr[i];
        }
        else if(arr[i]>smallest && arr[i]< secsmallest){
            secsmallest=arr[i];

        }
    
}
return secsmallest;
}
int main(){
    int arr[6]={1,23,45,67,89,76};
    int SLE=SecLargest(arr,6);
    int SSE=Secsmallest(arr,6);
    cout<<"The  Second largest element is "<<SLE<<endl;
    cout<<"The Second smallest element is"<<SSE<<endl;


}