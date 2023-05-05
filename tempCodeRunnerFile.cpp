#include <bits/stdc++.h>
using namespace std;
int m=1000033;
vector<int> f(1e18);
long long tinh(long long n){
    f[1]=1;
    for(int i=2;i<=1e18;i++){
        f[2]=(f[i-1]%m*i%m)%m;
    } 
}
long long power(long long a, long long k){
    if(k==0) return 1;
    long long x=power(a,k/2);
    if(k%2==0) return x*x%m;
    return a*(x*x%m)%m;
}
 int main(){
    int t;
    cin>>t;
    tinh()
    while(t--){
        long long l,r,k;
        cin>>l>>r>>k;
        long long res=gt(l);
        for(int i=1;i<=r-l;i++){
            res=(res%m*res*(l+i)%m)%m;
        }
        cout<<power(res,k)<<endl;
    }
 }