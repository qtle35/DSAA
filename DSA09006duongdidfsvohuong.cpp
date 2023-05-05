#include <bits/stdc++.h>
using namespace std;
int V,s,E,t,check[1005],b[1005];
vector<int> a[1005];
void dfs(int s){
    check[s]=1;
    for(int i=0;i<a[s].size();i++){
        int v=a[s][i];
        if(!check[v]){
            b[v]=s;
            dfs(v);
        }
    }
}
main(){
    int k;cin>>k;
    while(k--){
        cin>>V>>E>>s>>t;
        memset(check,0,sizeof(check));
        memset(a,0,sizeof(a));
        memset(b,0,sizeof(b));
        for(int i=1;i<=E;i++){
            int x,y;
            cin>>x>>y;
            a[x].push_back(y);
            a[y].push_back(x);
        }
        dfs(s);
        if(!check[t]) cout<<-1;
        else{
            vector<int> res;
            int i=t;cout<<s<<" ";
            while(i!=s){
                res.push_back(i);
                i=b[i];
            }
            for(int i=res.size()-1;i>=0;i--) cout<<res[i]<<" ";
        }
        cout<<endl;
    }
}