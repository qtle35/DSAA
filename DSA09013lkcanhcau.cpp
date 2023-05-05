#include <bits/stdc++.h>
using namespace std;
int v,e,check[1005];
vector<int> a[1005];
vector<pair<int,int> >canh;
void xoacanh(int x){
    for(int i=0;i<v;i++) a[i].clear();
    for(int i=0;i<e;i++){
        if(i!=x){
            a[canh[i].first].push_back(canh[i].second);
            a[canh[i].second].push_back(canh[i].first);
        }
    }
}
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
        canh.clear();
        memset(a,0,sizeof(a));
        memset(check,0,sizeof(check));
        cin>>v>>e;
        for(int i=0;i<e;i++){
            int x,y;
            cin>>x>>y;
            a[x].push_back(y);a[y].push_back(x);
            canh.push_back({x,y});
        }
        int l=0;
        for(int i=1;i<=v;i++){
            if(!check[i]){
                l++;
                dfs(i);
            }
        }
        memset(check,0,sizeof(check));
        for(int i=0;i<e;i++){
            xoacanh(i);
            int res=0;
            memset(check,0,sizeof(check));
            for(int j=1;j<=v;j++){
                if(!check[j]){
                    res++;
                    dfs(j);
                }
            }
            if(res>l) cout<<canh[i].first<<" "<<canh[i].second<<" ";
        }
        cout<<endl;
    }
}
