#include<bits/stdc++.h>
using namespace std;

/////Linear Search->O(N)----TC/////

// int search(vector<int> &arr,int n,int k){
//     for(int i=0;i<n;i++){
//         if(arr[i]==k){
//             return i;
//         }
//     }
//     return -1;
// }

///Binary Search////

int search(vector<int> & arr,int n,int k){
    int low=0;int high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==k) return mid;
        if(arr[low]<=arr[mid]){
            if(k>=arr[low] && k<=arr[mid]){
                high=mid-1;
            }else{low=mid+1;}
        }if(arr[high]>=arr[mid]){
            if(k<=arr[high]&&k>=arr[mid]){
                low=mid+1;
            }else{high=mid-1;}
        }
    }
    return -1;
}

int main(){
    vector<int> arr={7,8,9,1,2,3,4,5,6};
    int n=9,k=1;
    int ans=search(arr,n,k);
    if(ans==-1)
    cout<<"Target is not present.\n";
    else
    cout<<"The index is: "<<ans<<"\n";
    return 0;
}