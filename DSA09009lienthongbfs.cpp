#include <bits/stdc++.h>
using namespace std;
int v,e,check[1005];
vector<int> a[1005];
void bfs(int u){
    queue<int> q;
    q.push(u);
    check[u]=1;
    while(!q.empty()){
        int x=q.front();q.pop();
        for(int i=0;i<a[x].size();i++){
            int y=a[x][i];
            if(!check[y]){
                q.push(y);
                check[y]=1;
            }
        }
    }
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
            a[x].push_back(y);a[y].push_back(x);
        }
        int res=0;
        for(int i=1;i<=v;i++){
            if(!check[i]){
                res++;
                bfs(i);
            }
        }
        cout<<res<<endl;
    }
}