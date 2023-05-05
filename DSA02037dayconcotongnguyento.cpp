#include <bits/stdc++.h>
using namespace std;
int n,a[105],b[105];
bool nt(int n){
    if(n<2) return 0;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return 0;
    }
    return 1;
}
void in(){
    int s=0;
    for(int i=1;i<=n;i++){
        if(b[i]) s+=a[i];
    }
    if(nt(s)){
        for(int i=0;i<=n;i++){
            if(b[i]) cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}
void quaylui(int i){
    for(int j=0;j<=1;j++){
        b[i]=j;
        if(i==n) in();
        else quaylui(i+1);
    }
}
bool comp(int a,int b){
    return a>b;
}
main(){
    int t;cin>>t;
    while(t--){
        cin>>n;
        for(int i=1;i<=n;i++) cin>>a[i];
        sort(a+1,a+n+1,comp);
        quaylui(1);
    }
}