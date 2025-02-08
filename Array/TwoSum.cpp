#include<bits/stdc++.h>
using namespace std;
string TwoSum(int n,vector<int> book,int target){
    map<int,int> mpp;
    for(int i=0;i<n;i++){
    int a=book[i];
    int more =target-a;
    if(mpp.find(more) != mpp.end()){
        return "YES";
    }
    mpp[a]=i;
    }
    return "NO";
}


int main(){
    int n=4;
    vector<int> arr={2,0,0,3};
    int k=5;
    string target=TwoSum(n,arr,k);
    cout<<"The length of longest Subarray is: "<<target<<endl;
    return 0;

}