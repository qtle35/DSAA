#include <bits/stdc++.h>
using namespace std;
int kq=10000,n,a[35],s;
void quaylui(int i, int t, int x){
    if(t>s) return;
    if(i==n){
        if(t==s) kq=min(kq,x);
        return;
    }
    quaylui(i+1,t,x);
    quaylui(i+1,t+a[i],x+1);
}
main(){
    int t;cin>>t;
    while(t--){
        kq=10000;
        cin>>n>>s;
        for(int i=0;i<n;i++) cin>>a[i];
        quaylui(0,0,0);
        if(kq==10000) cout<<-1;
        else cout<<kq;
        cout<<endl;
    }
}