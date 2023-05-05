#include<bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
main(){
    vector<vector<long long> > a(1005,vector<long long>(1005,1));
    for(int i=1;i<=1000;i++){
        for(int j=1;j<i;j++){
            a[i][j]=(a[i-1][j-1]+a[i-1][j])%mod;
        }
    }
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        cout<<a[n+9][n]<<endl;
    }
}