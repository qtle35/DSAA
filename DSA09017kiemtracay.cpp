#include <bits/stdc++.h>
using namespace std;
int U,V,check[1005];
vector<int> a[1005];
void dfs(int u){
    check[u]=1;
    for(int i=0;i<a[u].size();i++){
        int v=a[u][i];
        if(!check[v]) dfs(v);
    }
}
main(){
    int t;cin>>t;
    while(t--){
        cin>>U;
        V=U-1;
        memset(a,0,sizeof(a));
        memset(check,0,sizeof(check));
        for(int i=0;i<V;i++){
            int x,y;
            cin>>x>>y;
            a[x].push_back(y);a[y].push_back(x);
        }
        dfs(1);
        int dem=0;
        for(int i=1;i<=U;i++) if(check[i]) dem++;
        if(dem==U) cout<<"YES\n";
        else cout<<"NO\n";
    }
}