#include<bits/stdc++.h>
using namespace std;
int MissEle(int arr[],int n){
    for(int i=1;i<=n;i++){
        int flag=0
        for(int j=0;j<n-1;j++){
            if(arr[j]==i){
                flag=1;
                break;
            }
        }
        if(flag==0) return i;

    }
    return -1;

}

int main(){
    int n=5;
    int arr[]={1,2,3,5};
    int ans=MissEle(arr,n);
    cout<<"The Missing number is"<<ans<<endl;
    return 0;
}