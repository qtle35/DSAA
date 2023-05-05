#include<bits/stdc++.h>
using namespace std;
int a[1005][1005],kq[1005][1005];
void xl(int n, int m){
    queue<pair<int,int> > q;
    memset(kq,-1,sizeof(kq));
    q.push({1,1});
    kq[1][1]=0;
    while(!q.empty()){
        pair<int,int> t=q.front();
        q.pop();
        int x=t.first,y=t.second;
        if(kq[x+abs(a[x][y]-a[x+1][y])][y]==-1){
            kq[x+abs(a[x][y]-a[x+1][y])][y]=kq[x][y]+1;
            q.push({x+abs(a[x][y]-a[x+1][y]),y});
        }
        if(kq[x][y+abs(a[x][y]-a[x][y+1])]==-1){
            kq[x][y+abs(a[x][y]-a[x][y+1])]=kq[x][y]+1;
            q.push({x,y+abs(a[x][y]-a[x][y+1])});
        }
        if(kq[x+abs(a[x][y]-a[x+1][y+1])][y+abs(a[x][y]-a[x+1][y+1])]==-1){
            kq[x+abs(a[x][y]-a[x+1][y+1])][y+abs(a[x][y]-a[x+1][y+1])]=kq[x][y]+1;
            q.push({x+abs(a[x][y]-a[x+1][y+1]),y+abs(a[x][y]-a[x+1][y+1])});
        }
        if(kq[n][m]!=-1) return;
    }
}
main(){
    int t;cin>>t;
    while(t--){
        int n,m;cin>>n>>m;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++) cin>>a[i][j];
        }
        xl(n,m);
        cout<<kq[n][m]<<endl;
    }
}