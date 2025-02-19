#include<bits/stdc++.h>

using namespace std;

int lowerbound(vector<int> arr,int k){
    int n=arr.size();
    int low=0;
    int high=n-1;
    int ans=n;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]>=k){
            ans=mid;
            high=mid-1;
        }else{low=mid+1;
        }
    }
    return ans;
}

int main(){
    vector<int> arr={1, 2, 8, 10, 11, 12, 19};
    int k=19;
    int lower=lowerbound(arr,k);
    cout<<lower;
}