#include <bits/stdc++.h>
using namespace std;
int gt(int n){
    int k=1;
    for(int i=2;i<=n;i++){
        k*=i;
    }
    return k-1;
}
main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            a[i]=i+1;
            cout<<a[i];
        }
        cout<<" ";
        int k=gt(n);
        while(k--){
            next_permutation(a,a+n);
            for(int i=0;i<n;i++) cout<<a[i];
            cout<<" ";
        }
        cout<<endl;
    }
}