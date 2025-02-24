#include<bits/stdc++.h>
using namespace std;

// int missingK(vector<int> arr,int k){
//     int n=arr.size();
//     for(int i=0;i<n;i++){
//         if(arr[i]<=k){
//             k++;
//         }else{ break;}
//     }
//     return k;
// 
int missingk(vector<int> arr,int k){
    int n=arr.size();
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        int missing=arr[mid]-(mid+1);
        if(missing<k){
            low=mid+1;
        }else{high=mid-1;}

    }
    return low+k;
}

int main(){
    vector<int> arr={2,3,4,7,11};
    int k=5;
    int answer=missingK(arr,k);
    cout<<"The Kth missing number is"<<answer;
    return 0;
}