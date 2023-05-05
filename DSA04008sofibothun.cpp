#include<bits/stdc++.h> 
using namespace std;
int m=1e9+7;
struct matran{
    long long f[2][2];
};
matran operator* (matran a, matran b){
    matran c;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            c.f[i][j]=0;
            for(int k=0;k<2;k++){
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
        int n;cin>>n;
        matran a;
        a.f[0][0]=1;a.f[0][1]=1;a.f[1][0]=1;a.f[1][1]=0;
        matran kq=powmod(a,n);
        cout<<kq.f[1][0]<<endl;
    }
}