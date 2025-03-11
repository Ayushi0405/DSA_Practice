#include<bits/stdc++.h>
using namespace std;

// int subarraywithXORK(vector<int> a,int k){
//     int n=a.size();
//     int cnt=0;
//     for(int i=0;i<n;i++){
//         int xorr=0;
//         for(int j=i;j<n;j++){
//             xorr=xorr^a[j];
           
            
//             if(xorr==k) cnt++;
//         }
//     }
//     return cnt;
// }

int subarraywithXORK(vector<int> a,int k){
    int n=a.size();
    int xr=0;
    unordered_map<int,int> mpp;
    mpp[xr]++;
    int cnt=0;
    for(int i=0;i<n;i++){
        xr=xr^a[i];
        int x=xr^k;
        cnt += mpp[x];
        mpp[xr]++;




    }
    return cnt; 


}

int main(){
    vector<int> a={4,2,2,6,4};
    int k=6;
    int ans=subarraywithXORK(a,k);
    cout<<"The number of subarrays with XOR k is:"<<ans<<"\n";
    return 0;
}