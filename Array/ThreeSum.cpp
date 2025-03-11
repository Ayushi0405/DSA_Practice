#include<bits/stdc++.h>

//BRUTE--> O(n^3)
// vector<vector<int>> triplet(int n,vector<int> &num){
//     set<vector<int>> st;
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             for(int k=j+1;k<n;k++){
//                 if(num[i]+num[j]+num[k]==0){
//                     vector<int> temp={num[i],num[j],num[k]};
//                     sort(temp.begin(),temp.end());
//                     st.inser(temp);
//                 }
//             }
//         }
//     }
//     vector<vector<int>> ans(st.begin(),st.end());
//     return ans;
// }

//BETTER--> Hashing-->O(N^2)

vector<vector<int>> triplet(int n,vector<int> & nums){
    set<vector<int>> st;
    for(int i=0;i<n;i++){
        set<int> hashset;
        for(int j=i+1;j<n;j++){
            int third=-(nums[i]+nums[j]);
            if(hashset.find()!=hashset.end()){
                vector<int> temp={nums[i],nums[j],nums[k]};
                sort(temp.begin(),temp.end());
                st.insert(temp);
            }
            hashset.insert(nums[j]);
        }
       
    }
    vector<vector<int>> ans(st.begin(),st.end());
    return ans;
}


int main(){
    vector<int> &arr={-1,0,1,2,-1,-4};
    int n=arr.size();
    vector<vector<int>> ans=triplet(n,arr);
    for(auto it:ans){
        cout<<"[";
        for(auto i:it){
            cout<<i<<" ";
        }
        cout<<"]";
    }
    cout<<"\n";
    return 0;

}