#include <bits/stdc++.h>
using namespace std;
int v,e,check[1005];
vector<int> a[1005];
void dfs(int u){
    check[u]=1;
    for(int i=0;i<a[u].size();i++){
        int x=a[u][i];
        if(!check[x]) dfs(x);
    }
}
void solution(){
    for(int i=1;i<=v;i++){
        dfs(i);
        for(int j=1;j<=v;j++){
            if(!check[j]){ 
                cout<<"NO\n";
                return;
            }
        }
        memset(check,0,sizeof(check));
    }
    cout<<"YES\n";
}
main(){
    int t;cin>>t;
    while(t--){
        cin>>v>>e;
        memset(check,0,sizeof(check));
        memset(a,0,sizeof(a));
        for(int i=0;i<e;i++){
            int x,y;
            cin>>x>>y;
            a[x].push_back(y);
        }
        solution();
    }
}