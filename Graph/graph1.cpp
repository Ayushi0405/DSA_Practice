#include<bits/stdc++.h>
using namespace std;
int n,m;
vector<vector<int>> g;
void Printer(){
for(int i=0;i<=n;i++){
            cout<<i<<": ";
            for(auto v:g[i]){
                cout<<v<<", ";
            }
            cout<<endl;

        }
}
int main(){
    
    cin>>n>>m;
    g.clear();
    g.resize(n+1);
    for(int i=0;i<=m;i++){
        int a,b;
        cin>>a>>b;
        g[a].push_back(b);
        //if undirected
        g[b].push_back(a);
        Printer();

        //g is ready?
        
        return 0;

    }

}