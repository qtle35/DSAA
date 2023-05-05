#include <bits/stdc++.h>
using namespace std;
int m=1e9+7;
main(){
    int t;cin>>t;
    while(t--){
        long long k=0;
        int n;cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        for(int i=0;i<n;i++){
            k=(k+a[i]*i%m)%m;
        }
        cout<<k<<endl;
    }
}