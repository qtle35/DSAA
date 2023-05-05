#include<bits/stdc++.h> 
using namespace std;
int n;
int m=1e9+7;
struct matran{
    long long f[10][10];
};
matran operator* (matran a, matran b){
    matran c;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            c.f[i][j]=0;
            for(int k=0;k<n;k++){
                c.f[i][j]=(c.f[i][j]+a.f[i][k]*b.f[k][j]%m)%m;
            }
        }
    }
    return c;
}
matran powmod(matran a, int n){
    if(n==1) return a;
    matran x=powmod(a,n/2);
    if(n%2==0) return x*x;
    return a*x*x;
}
main(){
    int t;cin>>t;
    while(t--){
        long long res=0;
        int k;cin>>n>>k;
        matran a;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>a.f[i][j];
            }
        }
        matran kq=powmod(a,k);
        for(int i=0;i<n;i++){
            res+=kq.f[0][i];
        }
        cout<<res%m<<endl;
    }
}