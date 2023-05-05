#include <bits/stdc++.h> 
using namespace std;
int n,k,m,a[1005],b[10005],dem=0,c[20],d[20];
int h=1e9+9;
void xuli(){

}
void quaylui2(int i){
    for(int j=d[i-1]+1;j<=m-k+i;j++){
        d[i]=j;
        if(i==k){
            for(int l=1;l<=k;l++){
                if(a[c[l]-1]<=b[d[l]-1]) return;
            }
            dem++;
        }
        else if(a[c[1]-1]>b[d[1]-1]) quaylui2(i+1);
    }
}
void quaylui(int i){
    for(int j=c[i-1]+1;j<=n-k+i;j++){
        c[i]=j;
        if(i==k) quaylui2(1);
        else quaylui(i+1);
    }
}
main(){
    cin>>n>>m>>k;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<m;i++) cin>>b[i];
    sort(a,a+n);sort(b,b+m);
    quaylui(1);
    cout<<dem%h;
}