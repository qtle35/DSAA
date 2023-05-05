#include <bits/stdc++.h>
using namespace std;
int a[10],b[100],ok,n;
void quaylui(int i,int s){
    if(ok) return;
    if(s==23&&i==5){
        ok=1;
        return;
    }
    for(int j=0;j<5;j++){
        if(!b[j]){
            b[j]=1;
            quaylui(i+1,s+a[j]);
            quaylui(i+1,s*a[j]);
            quaylui(i+1,s-a[j]);
            b[j]=0;
        }
    }
}
main(){
    int t;cin>>t;
    while(t--){
        ok=0;
        for(int i=0;i<5;i++) cin>>a[i];
        for(int i=0;i<5;i++){
            b[i]=1;
            quaylui(1,a[i]);
            b[i]=0;
        }
        if(ok) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}