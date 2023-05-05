#include <bits/stdc++.h>
using namespace std;
vector<int> a[1005];
int b[1005];
void dfs(int u){
    b[u]=1;
    for(int i=0;i<a[u].size();i++){
        int v=a[u][i];
        if(!b[v]) dfs(v);
    }
}
main(){
    int n,c,u,ok=0;
    cin>>n>>c>>u;
    for(int i=0;i<c;i++){
        int x,y;
        cin>>x>>y;
        a[x].push_back(y);
        a[y].push_back(x);
    }
    dfs(u);
    for(int i=1;i<=n;i++){
        if(!b[i]){
            cout<<i<<endl;
            ok=1;
        }
    }
    if(!ok) cout<<0;
}