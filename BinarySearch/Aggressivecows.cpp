#include<bits/stdc++.h>
using namespace std;

bool canweplace(vector<int> arr,int dist,int cows){
    int n=arr.size();
    int cntcows=1;
    int last=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]-last>=dist){
            last =arr[i];
            cntcows++;


        }
        if(cntcows>=cows){
            return true;
        }
    }
    return false;
}
int aggressivecows(vector<int> &stalls,int cows){
    int n=stalls.size();
    sort(stalls.begin(),stalls.end());
    int low=1;
    int high=stalls[n-1]-stalls[0];
    while(low<=high){
        int mid=(low+high)/2;
        if(canweplace(stalls,mid,cows)==true){
            low=mid+1;
        }else{high=mid-1;}
    }
    return high;
}
int main()
{
    vector<int> stalls = {0, 3, 4, 7, 10, 9};
    int k = 4;
    int ans = aggressivecows(stalls, k);
    cout << "The maximum possible minimum distance is: " << ans << "\n";
    return 0;
}