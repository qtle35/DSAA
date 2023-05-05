#include <bits/stdc++.h>
using namespace std;
int m,n,a[21][21],res;
void dfs(int u,int temp){
    res=max(res,temp);
    for(int v=0;v<n;v++){
        if(a[u][v]){
            a[u][v]=a[v][u]=0;
            dfs(v,temp+1);
            a[u][v]=a[v][u]=1;
        }
    }
}
main(){
    int t;cin>>t;
    while(t--){
        int u,v;
        res=-1;
        memset(a,0,sizeof(a));
        cin>>n>>m;
        for(int i=0;i<m;i++){
            cin>>u>>v;
            a[u][v]=a[v][u]=1;
        }
        for(int i=0;i<=n;i++) dfs(i,0);
        cout<<res<<endl;
    }
}