#include <bits/stdc++.h>
using namespace std;
int n,c[50][50],b[50],a[50],res[50][50],m,k;
void xuly(){
    int t=0;
    for(int i=1;i<=n;i++) t+=c[i][a[i]];
    if(t==k){
        for(int i=1;i<=n;i++) res[m][i]=a[i];
        m++;
    }
}
void quaylui(int i){
    for(int j=1;j<=n;j++){
        if(!b[j]){
            a[i]=j;b[j]=1;
            if(i==n) xuly();
            else quaylui(i+1);
            b[j]=0;
        }
    }
}
main(){
    m=1;
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++) cin>>c[i][j];
    }
    quaylui(1);
    cout<<m-1<<endl;
    for(int i=1;i<m;i++){
        for(int j=1;j<=n;j++) cout<<res[i][j]<<" ";
        cout<<endl;
    }
}