#include<bits/stdc++.h>
using namespace std;

vector<int> MissingRepeatingArr(vector<int> arr){
    int n=arr.size();
    long long Sn=(n*(n+1))/2;
    long long S2n=(n*(n+1)*(2*n+1))/6;
    long long S=0;
    long long S2=0;
    for(int i=0;i<n;i++){
        S += arr[i];
        S2 += (long long) arr[i]*(long long) arr[i];
    }

    long long val1=S-Sn;
    long long val2=S2-S2n;
    val2=val2/val1;
    long long x=(val1+val2)/2;
    long long y=x-val1;
    return {(int)x,(int)y};
}

// vector<int> MissingRepeatingArr(vector<int> arr){
//     int n=arr.size();
//     vector<int> hash(n+1,0);
//     for(int i=0;i<n;i++){
//         hash[arr[i]]++;

//     }

//     int missing=-1;
//     int repeating=-1;
//     for(int i=1;i<=n;i++){
//         if(hash[i]==2){
//             repeating=i;
//         }else if(hash[i]==0){
//             missing=i;
//         }

//         if(repeating !=-1 && missing !=-1){
//             break;
//         }

//     }
//     return {repeating,missing};
// }

int main()
{
    vector<int> a = {3, 1, 2, 5, 4, 6, 7, 5};
    vector<int> ans = MissingRepeatingArr(a);
    cout << "The repeating and missing numbers are: {"
         << ans[0] << ", " << ans[1] << "}\n";
    return 0;
}