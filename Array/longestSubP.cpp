#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int longestSubarraywithSumK(vector<int> nums,long long k){
    int left=0;
    int right=0;
    long long sum=nums[0];
    int n=nums.size();
    int maxLen=0;
    while(right<n){
        while(left <= right &&  sum>k){
            sum -= nums[left];
            left++;
        }
        if(sum==k){
            maxLen=max(maxLen,right-left+1);
        } 

        
        right++;

        if(right<n){
            sum += nums[right];
        }
        
    }

return maxLen;
}
int main(){
    vector<int> arr={2,0,0,3};
    long long k=3;
    int len=longestSubarraywithSumK(arr,k);
    cout<<"The length of longest Subarray is: "<<len<<endl;
    return 0;

}