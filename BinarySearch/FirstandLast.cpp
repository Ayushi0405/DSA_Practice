#include<bits/stdc++.h>
using namespace std;
vector<int> FirstandLastOcc(vector<int> arr,int x){
    int first=-1;
    int last=-1;
    int n=arr.size();
    vector<int> ans;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
        if(first==-1){
            first=i;
        }last=i;
    }
    }
    ans.push_back(first);
    ans.push_back(last);
    return ans;

}
int main(){
    vector<int> arr={1,2,2,3,4,5,6,7,7,7,8,8,9,8};
    int x=8;
    vector<int> ans=FirstandLastOcc(arr,x);
    for(int i:ans){
        cout<<i<<" ";
    }


}