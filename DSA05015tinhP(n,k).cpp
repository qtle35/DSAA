#include<bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
long long a[1005][1005];
void qhd(){
    for(int i=0;i<1001;i++) a[i][0]=1;
    for(int i=1;i<=1001;i++){
        for(int j=1;j<=i;j++){
            a[i][j]=(a[i-1][j]+j*a[i-1][j-1])%mod;
        }
    }
}
main(){
    int t;cin>>t;
    qhd();
    while(t--){
        int n,k;
        cin>>n>>k;
        cout<<a[n][k]<<endl;
    }
}