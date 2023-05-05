#include <bits/stdc++.h>
using namespace std;
int n,m,check[505][505];
char a[505][505];
int X[]={-1,0,1,1,1,0,-1,-1};
int Y[]={-1,-1,-1,0,1,1,1,0};
void dfs(int x,int y){
    for(int i=0;i<8;i++){
        if(x+X[i]<n&&y+Y[i]<m&&x+X[i]>=0&&y+Y[i]>=0&&a[x+X[i]][y+Y[i]]=='W'&&!check[x+X[i]][y+Y[i]]){
            check[x+X[i]][y+Y[i]]=1;
            dfs(x+X[i],y+Y[i]);
        }
    }
}
void solution(){
    int res=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]=='W'&&!check[i][j]){
                //cout<<i<<" "<<j<<endl;
                check[i][j]=1;
                res++;
                dfs(i,j);
            }
        }
    }
    cout<<res<<endl;
}
main(){
        memset(check,0,sizeof(check));
        memset(a,0,sizeof(a));
        cin>>n>>m;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++) cin>>a[i][j];
        }
        solution();
}