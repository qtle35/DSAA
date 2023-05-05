#include <bits/stdc++.h>
using namespace std;
main(){
    int t;cin>>t;
    while(t--){
        long long n,k1=0,k2=0;cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        for(int i=0;i<n;i++){
            if(i%2==0) k1=k1*10+a[i];
            else k2=k2*10+a[i];
        }
        cout<<k1+k2<<endl;
    }
    
}