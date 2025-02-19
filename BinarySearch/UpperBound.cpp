#include<bits/stdc++.h>
using namespace std;
// int LowerBound(vector<int> arr,int k){
//     int n=arr.size();
//     int ans=-1;

//     for(int i=0;i<n;i++){
//         if(arr[i]<=k){
//             ans=i;
//         }else{break;
//         }
        
//     }
//     return ans;
// }

//// Using Binary search ////

int LowerBound(vector<int> arr,int k){
    int n=arr.size();
    int low=0;
    int high=n-1;
    
    int ans=-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]<=k){
            ans=mid;
            low=mid+1;

        }else{high=mid-1;}
    }
    return ans;
}

int main(){
    vector<int> arr={1, 2, 8, 10, 11, 12, 19};
    int k=19;
    int lower=LowerBound(arr,k);
    cout<<lower;
}