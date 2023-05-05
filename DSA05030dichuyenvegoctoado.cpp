#include<bits/stdc++.h>
using namespace std;
long long n,m,a[27][27];
void qhd(){
    for(int i=1;i<=25;i++){
        a[i][0]=1;
        a[0][i]=1;
    }
    for(int i=1;i<=25;i++){
        for(int j=1;j<=25;j++){
            a[i][j]=a[i-1][j]+a[i][j-1];
        }
    }
}
main(){
    int t;cin>>t;
    qhd();
    while(t--){
        cin>>n>>m;
        cout<<a[n][m]<<endl;
    }
}