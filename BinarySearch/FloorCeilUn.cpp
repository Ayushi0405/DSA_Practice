#include<bits/stdc++.h>
using namespace std;
vector<int> getFloorAndCeil(int x,vector<int> &arr){
    int n=arr.size();
    vector<int> ans;
    int floor=-1;
    int ceil=-1;
    for(int i=0;i<n;i++){
        
        
        if(arr[i]>=x){if(ceil==-1||arr[i]<ceil){
            ceil=arr[i];

            
        }}if(arr[i]<=x){
            floor=max(floor,arr[i]);
            
        }
        
    }
    ans.push_back(floor);
    ans.push_back(ceil);
    
    return ans;
}
int main(){
    vector<int> arr={1, 2, 8, 10, 11, 12, 19};
    int x=9;
    vector<int> ans = getFloorAndCeil(x, arr);

    for(int i:ans)
    cout<<i<<" ";
}