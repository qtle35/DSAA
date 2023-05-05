#include<bits/stdc++.h>
using namespace std;
main(){
    int n,res=0,d=0,k=0;cin>>n;
    int a[n];
    for(int i=0;i<n;i++) {
        cin>>a[i];
        k=max(k,a[i]);
    }
    for(int i=0;i<n;i++){
        if(k==a[i]){
            d++;
            res=max(res,d);
        }
        else d=0;
    }
    cout<<res;
}