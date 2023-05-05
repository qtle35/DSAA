#include <bits/stdc++.h>
using namespace std;
main(){
    int t;cin>>t;
    while(t--){
        int n,k,x,r1=0,r2=0;cin>>n>>k;
        int a[n];
        x=min(k,n-k);
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        for(int i=0;i<n;i++){
            if(i<x) r1+=a[i];
            else r2+=a[i];
        }
        cout<<r2-r1<<endl;
    }
}