#include <bits/stdc++.h>
using namespace std;
main(){
    int t;cin>>t;
    while(t--){
        int n,m,u,v;
        cin>>n>>m;
        vector<int> list[1005];
        for(int i=1;i<=m;i++){
            cin>>u>>v;
            list[u].push_back(v);
        }
        for(int i=1;i<=n;i++){
            cout<<i<<": ";
            for(auto y:list[i]) cout<<y<<" ";
            cout<<endl;
        }
    }
}