#include <bits/stdc++.h>
using namespace std;
int n,m;
int c[105][105];
void floyd(){
    for(int k=1;k<=n;k++){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(c[i][j]>c[i][k]+c[k][j]) c[i][j]=c[i][k]+c[k][j];
            }
        }
    }
}
main(){
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==j) c[i][j]=0;
            else c[i][j]=1e9;
        }
    }
    for(int i=1;i<=m;i++){
        int x,y,k;cin>>x>>y>>k;
        c[x][y]=c[y][x]=k;
    }
    floyd();
    int q;cin>>q;
    while(q--){
        int u,v;cin>>u>>v;
        cout<<c[u][v]<<endl;
    }
}