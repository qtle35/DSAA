#include <bits/stdc++.h>
using namespace std;
int V,u,E,check[1005];
vector<int> a[1005];
void bfs(int u){
    queue<int> q;q.push(u);
    cout<<u<<" ";
    check[u]=1;
    while(!q.empty()){
        int x=q.front();q.pop();
        for(int i=0;i<a[x].size();i++){
            int y=a[x][i];
            if(!check[y]){
                q.push(y);check[y]=1;
                cout<<y<<" ";
            }
        }
    }
}
main(){
    int t;cin>>t;
    while(t--){
        cin>>V>>E>>u;
        memset(check,0,sizeof(check));
        memset(a,0,sizeof(a));
        for(int i=1;i<=E;i++){
            int x,y;
            cin>>x>>y;
            a[x].push_back(y);
            a[y].push_back(x);
        }
        bfs(u);
        cout<<endl;
    }
}