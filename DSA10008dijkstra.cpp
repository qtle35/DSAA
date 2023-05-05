#include <bits/stdc++.h>
using namespace std;
int n,m,s;
vector<pair<int,int>> a[1005];
priority_queue<pair<int,int>,vector<pair<int,int>>, greater<pair<int,int>>> q;
int d[1005],parent[1005];
void dijkstra(int s){
    int u,v;
    for(int i=1;i<=n;i++){
        d[i]=1e9;
        parent[i]=-1;
    }
    d[s]=0;
    while(!q.empty()) q.pop();
    q.push({0,s});
    while(!q.empty()){
        u=q.top().second;q.pop();
        for(int i=0;i<a[u].size();i++){
            v=a[u][i].second;
            int d_u_v=a[u][i].first;
            if(d[u]+d_u_v<d[v]){
                d[v]=d[u]+d_u_v;
                parent[v]=u;
                q.push({d[v],v});
            }
        }
    }
    for(int i=1;i<=n;i++) cout<<d[i]<<" ";
    cout<<endl;
}
main(){
    int t; cin>>t;
    while(t--){
        cin>>n>>m>>s;
        for(int i=0;i<=n;i++) a[i].clear();
        for(int i=0;i<m;i++){
            int u,v,k;cin>>u>>v>>k;
            a[u].push_back({k,v});
            a[v].push_back({k,u});
        }
        dijkstra(s);
    }
}