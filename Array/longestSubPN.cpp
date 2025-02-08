#include<iostream>
#include <bits/stdc++.h>
using namespace std;
// int getlongestSubarray(vector<int> nums,long long k){
//     int n=nums.size();
//     int len=0;
//     for(int i=0;i<n;i++){
//         long long sum=0;
//         for(int j=i;j<n;j++){
//             sum += a[j];
            
            
//             }
//                 if(sum= =k){
//                     len=max(len,j-i+1);
//                 }
            
//         }
    
//     return len;


// }

int getlongestSubarray(vector<int> nums,long long k){
int n=nums.size();
map<long long,int> preSumMap;
long long sum=0;
int maxlen=0;
for(int i=0;i<n;i++){
    sum += nums[i];
    if(sum==k){
        maxlen=max(maxlen,i+1);

    }
    long long rem=sum-k;
    if(preSumMap.find(rem) != preSumMap.end()){
        int len =i-preSumMap[rem];
        maxlen=max(maxlen,len);
    }
    if(preSumMap.find(sum) == preSumMap.end()){
    preSumMap[sum]=i;
    }
}
return maxlen;
}
int main(){
    vector<int> arr={2,0,0,3};
    long long k=3;
    int len=getlongestSubarray(arr,k);
    cout<<"The length of longest Subarray is: "<<len<<endl;
    return 0;

}