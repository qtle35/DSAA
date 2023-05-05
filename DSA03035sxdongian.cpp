#include<bits/stdc++.h>
using namespace std;
main(){
    int a[100000],n,d=1,res=0,vt[100000];
    cin>>n;
    for(int i=0;i<n;i++) {
        cin>>a[i];
        vt[a[i]-1]=i+1;
    }
    for(int i=1;i<n;i++){
        if(vt[i]>vt[i-1]) d++;
        else d=1;
        res=max(res,d);
    }
    cout<<n-res<<endl;
}