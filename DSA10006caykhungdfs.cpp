#include <bits/stdc++.h>
using namespace std;
int E,V,u,check[1005];
vector<int> a[1005];
vector<pair<int,int>> p;
void dfs(int u){
    check[u]=1;
    for(int i=0;i<a[u].size();i++){
        int v=a[u][i];
        
        if(!check[v]){ 
            p.push_back({u,v});
            dfs(v);
        }
    }
}
main(){
    int t;cin>>t;
    while(t--){
        cin>>V>>E>>u;
        memset(a,0,sizeof(a));
        memset(check,0,sizeof(check));
        p.clear();
        for(int i=0;i<E;i++){
            int x,y;
            cin>>x>>y;
            a[x].push_back(y);a[y].push_back(x);
        }
        dfs(u);
        int dem=0;
        for(int i=1;i<=V;i++) if(check[i]) dem++;
        if(dem==V){
            for(int i=0;i<p.size();i++) cout<<p[i].first<<" "<<p[i].second<<endl;
        }
        else cout<<"-1\n";
    }
}