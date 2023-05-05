#include<bits/stdc++.h>
using namespace std;
int a[500000];
main(){
    long long n,res=0;cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]>0) res+=a[i];
    }
    cout<<res*2;
}