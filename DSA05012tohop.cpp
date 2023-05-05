#include <bits/stdc++.h>
using namespace std;
int c[1005][1005],n,k;
int m=1e9+7;
void tinh(){
    int i,j;
    for(i=0;i<=1000;i++){
        for(j=0;j<=i;j++){
            if(j==i || j==0) c[i][j]=1;
            else c[i][j]=(c[i-1][j]+c[i-1][j-1])%m;
        }
    }
}
main(){
    int t;cin>>t;
    tinh();
    while(t--){
        cin>>n>>k;
        cout<<c[n][k]<<endl;;
    }
}