#include<bits/stdc++.h>
using namespace std;
// void markRow(vector<vector<int>> &matrix, int n,int m,int i){
//     //set all non zero elements as -1 in the row i:
//     for(int j=0;j<m;j++){
//         if(matrix[i][j] != 0){
//             matrix[i][j] = -1;

//         }
//     }
// }

// void markCol(vector<vector<int>> &matrix, int n,int m,int j){
//     //set all non zero lement as -1 in the col j:
//     for(int i=0;i<n;i++){
//         if(matrix[i][j]!=0){
//             matrix[i][j]=-1;
//         }
//     }
// }

// vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             if(matrix[i][j]==0){
//                 markRow(matrix,n,m,i);
//                 markCol(matrix,n,m,j);
//             }
//         }
//     }
//     //finally mark all -1 as 0:
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             if(matrix[i][j] ==-1){
//                 matrix[i][j] =0;
//             }
//         }
//     }
//     return matrix;

// }
vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m){
vector<int> col(m, 0);
vector<int> row(n, 0);


    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j]==0){
                row[i]=1;
                col[j]=1;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(row[i]==1|| col[j]==1){
                matrix[i][j]=0;

            }
        }
    }
    return matrix;
}

int main(){
    vector<vector<int>> matrix={{1,1,1},{1,0,1},{1,1,1}};
    int n =matrix.size();
    int m=matrix[0].size();
    vector<vector<int>> ans =zeroMatrix(matrix,n,m);
    cout<<"The Final Matrix is:\n";
    for(auto it: ans)//it is row of vector
    {
        for(auto ele: it)//ele row kaa
        {cout<<ele<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
