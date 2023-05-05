#include <bits/stdc++.h>
using namespace std;
main(){
    int t;cin>>t;
    while(t--){
        int v,e,k=0,ok=0;
        vector<int> a[1005];
        vector<int> b[1005];
        cin>>v>>e;
        for(int i=0;i<e;i++){
            int x,y;cin>>x>>y;
            a[x].push_back(y);
            b[y].push_back(x);
        }
        for(int i=1;i<=v;i++){
            if(a[i].size()!=b[i].size()){
                ok=1;
                break;
            }
        }
        if(!ok) cout<<1<<endl;
        else cout<<0<<endl;
    }
}