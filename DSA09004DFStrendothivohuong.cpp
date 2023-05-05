#include <bits/stdc++.h>
using namespace std;
int V,u,E,check[1005];
vector<int> a[1005];
void dfs(int u){
    cout<<u<<" ";
    check[u]=1;
    for(int i=0;i<a[u].size();i++){
        int v=a[u][i];
        if(!check[v]) dfs(v);
    }
}
main(){
    int t;cin>>t;
    while(t--){
        cin>>V>>E>>u;
        memset(check,0,sizeof(check));
        memset(a,0,sizeof(a));
        for(int i=1;i<=E;i++){
            int x,y;
            cin>>x>>y;
            a[x].push_back(y);
            a[y].push_back(x);
        }
        dfs(u);
        cout<<endl;
    }
}