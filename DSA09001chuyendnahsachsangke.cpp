#include <bits/stdc++.h>
using namespace std;
main(){
    int t;cin>>t;
    while(t--){
        vector<int> List[1005];
        int n,m,u,v;cin>>n>>m;
        for(int i=1;i<=m;i++){
            cin>>u>>v;
            List[u].push_back(v);
            List[v].push_back(u);
        }
        for(int i=1;i<=n;i++){
            cout<<i<<": ";
            for(auto j:List[i]) cout<<j<<" ";
            cout<<endl;
        }
    }
}