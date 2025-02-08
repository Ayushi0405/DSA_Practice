#include <bits/stdc++.h>
using namespace std;

// vector<int> FindArrInt(vector<int> &A, int n, vector<int> &B, int m) {
//     vector<int> ans;
//     vector<int> vis(m, 0); // Corrected to use vector instead of C-style array

//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             if (A[i] == B[j] && vis[j] == 0) { // Fixed '&' to '&&' and vis condition
//                 ans.push_back(A[i]);
//                 vis[j] = 1; // Fixed incorrect assignment
//                 break;
//             }
//             if (B[j] > A[i]) {
//                 break;
//             }
//         }
//     }
//     return ans;
// }
vector<int> FindArrInt( vector<int> &A,int n,vector<int> &B,int m){
    vector<int> ans;
    int i=0;
    int j=0;
    while(i<n && j<m){
        if(A[i]<B[j]){
            i++;

        }else if(B[j]<A[i]){
            j++;
        }else{
            ans.push_back(A[i]);
            i++;
            j++;
        }
    }
    return ans;
}


int main() {
    vector<int> arr1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> arr2 = {2, 3, 4, 4, 5, 11, 12};

    vector<int> Intersection = FindArrInt(arr1, arr1.size(), arr2, arr2.size());

    cout << "Intersection of arr1 and arr2 is: ";
    for (auto &it : Intersection) {
        cout << it << " ";
    }
    cout << endl;
    
    return 0;
}
