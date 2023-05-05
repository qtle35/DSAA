#include <bits/stdc++.h>
using namespace std;
int E,V,u,check[1005];
vector<int> a[1005];
vector<pair<int,int>> p;
void bfs(int u){
    check[u]=1;
    queue<int> q;
    q.push(u);
    while(!q.empty()){
        int s=q.front();q.pop();
        for(int i=0;i<a[s].size();i++){
            int t=a[s][i];
            if(!check[t]){
                check[t]=1;
                q.push(t);
                p.push_back({s,t});
            }
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
        bfs(u);
        int dem=0;
        for(int i=1;i<=V;i++) if(check[i]) dem++;
        if(dem==V){
            for(int i=0;i<p.size();i++) cout<<p[i].first<<" "<<p[i].second<<endl;
        }
        else cout<<"-1\n";
    }
}