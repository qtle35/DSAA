#include <bits/stdc++.h>
using namespace std;
int v,e,check[1005],res=0;
int a[1005][1005];
void dfs(int u){
    check[u]=1;
    for(int i=1;i<=v;i++){
        if(a[u][i]){
            if(check[i]==0) dfs(i);
            else if(check[i]==1){
                res=1;
            }
        }
    }
    check[u]=2;
}
main(){
    int t;cin>>t;
    while(t--){
        res=0;
        memset(a,0,sizeof(a));
        memset(check,0,sizeof(check));
        cin>>v>>e;
        for(int i=0;i<e;i++){
            int x,y;cin>>x>>y;
            a[x][y]=1;
        }
        for(int i=1;i<=v;i++){
            if(!check[i]) dfs(i);
        }
        if(res) cout<<"YES\n";
        else cout<<"NO\n";
    }
}