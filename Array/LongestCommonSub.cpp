#include<bits/stdc++.h>
using namespace std;
// int LongestCommonSubsequence(vector<int> arr){
//     int n=arr.size();
//     if(n==0){
//         return 0;
//     }
//     sort(arr.begin(),arr.end());
//     int lastSmaller=INT_MIN;
//     int cnt=0;
//     int longest=1;
//     for(int i=0;i<n;i++){
//         if(arr[i]-1 == lastSmaller){
//             cnt +=1;
//             lastSmaller=arr[i];
//         }else if(arr[i] != lastSmaller){
//             cnt=1;
//             lastSmaller=arr[i];
//         }
//         longest=max(longest,cnt);
//     }
//     return longest;

// }
//Optimal-->Using unordered set data structure
 int LongestCommonSubsequence(vector<int> & arr){
    int n =arr.size();
    if(n==0){
        return 0;
    }
    int longest=1;
    unordered_set<int> st;
    for(int i=0;i<n;i++){
        st.insert(arr[i]);
    }
    for(auto it:st){
        if(st.find(it-1) == st.end()){
            int cnt=1;
            int x=it;
            while(st.find(x+1) != st.end()){
                cnt +=1;
                x=x+1;
            }
            longest=max(longest,cnt);
        }

    }
    return longest;
 }



int main(){
    int n=15;
    vector<int> arr={1,1,1,2,2,2,3,3,3,100,101,102,103,104,105};
    int n1=LongestCommonSubsequence(arr);
    cout<<"The longest common subsequence is "<<n1<<endl;
    return 0;
}