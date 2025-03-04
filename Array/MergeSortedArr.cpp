#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void swap(vector<int> &arr1,vector<int> &arr2,int ind1,int ind2){
    if(arr1[ind1]>arr2[ind2]){
        swap(arr1[ind1],arr2[ind2]);
    }
}

void MergeSortedArray(vector<int> &arr1,vector<int> &arr2){
    int n=arr1.size();
    int m=arr2.size();

    int len=(n+m);
    int gap=(len/2)+(len%2);
    while(gap>0){
        int left=0;
        int right=left+gap;
        while(right<len){
            if(left<n && right>=n){
                swap(arr1,arr2,left,right-n);
            }
            else if(left>=n){
                swap(arr2,arr2,left-n,right-n);
            }else{
                swap(arr1,arr1,left,right);
            }
            left++;
            right++;
        }
        if(gap==1) break;
        gap=(gap/2)+(gap%2);
    }
}



// void MergeSortedArray(vector<long long> &arr1,vector<long long> &arr2){
//     int n=arr1.size();
//     int m=arr2.size();
//     vector<long long> arr3(n+m);
//     int first=0;
//     int second=0;
//     int index=0;
//     while(first<n && second<m){
//         if(arr1[first]<=arr2[second]){
//             arr3[index]=arr1[first];
//             index++;
//             first++;


//         }else{
//             arr3[index]=arr2[second];
//             index++;
//             second++;
//         }
//     }
//     while(first<n){
//         arr3[index++]=arr1[first++];
//     }
//     while(second<m){
//         arr3[index++]=arr2[second++];
//     }

//     for(int i=0;i<(n+m);i++){
//        if(i<n){
//         arr1[i]=arr3[i];
//        }else{
//         arr2[i-n]=arr3[i];
//        }
//     }

// }

int main(){
    vector<int>arr1={1,3,5,7};
    vector<int>arr2={0,2,6,8,9};
    int n=arr1.size();
    int m=arr2.size();
    MergeSortedArray(arr1,arr2);
    for(int i=0;i<n;i++){
        cout<<arr1[i]<<" ";
    }
    for(int i=0;i<m;i++){
        cout<<arr2[i]<<" ";
    }


}