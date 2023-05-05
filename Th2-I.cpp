#include <bits/stdc++.h>
using namespace std;
int b[1005],n,c,d,sdt=0,bd;
vector<int> a[1005];
void dfs(int u){
    b[u]=1;
    for(int i=0;i<a[u].size();i++){
        int v=a[u][i];
        if(!b[v]) dfs(v);
    }
}
int stplt{
    int slt=0;
    for(int i=1;i<=n;i++){
        if(!b[i]){
            slt++;
            dfs(i);
        }
    }
    return slt;
}
int canhcau(){
    int dem=0;
    for(int i=0;i<=n;i++){
        for(int j=0;j<a[i].size();j++){
            int k=a[i][j];
            a[i].erase(a[i].begin()+j);
            dfs(i);
            if(stplt()+1>bd) dem++;
            a[i].insert(a[i].begin()+j,k);
            memset(b,0,sizeof(b));
        }
    }
    return dem;
}
int dinhtru(int x){
    memset(b,0,sizeof(b));
    b[x]=1;
    if(x==1) dfs(2);
    else dfs(1);
    return stplt()+1;
}
main(){
    cin>>n>>c;
    for(int i=0;i<c;i++){
        int x,y;
        cin>>x>>y;
        a[x].push_back(y);
        a[y].push_back(x);
    }
    bd=stplt();
    for(int i=1;i<=n;i++){
        if(dinhtru(i)>bd) sdt++;
    }
    cout<<sdt<<" ";
    memset(b,0,sizeof(b));
    cout<<canhcau()/2;
}