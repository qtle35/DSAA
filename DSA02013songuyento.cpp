#include <bits/stdc++.h>
using namespace std;
int n,p,s,a[500],m,b[500],h;
string res[500];
bool snt(int n){
    if(n<2) return 0;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return 0;
    }
    return 1;
}
void in(){
    res[h]="";
    int t=0;
    for(int i=1;i<=n;i++) t+=a[b[i]];
    if(t==s){
        for(int i=1;i<=n;i++) res[h]+=to_string(a[b[i]])+" ";
        h++;
    }
}
void quaylui(int i){
    for(int j=b[i-1]+1;j<=m-n+1;j++){
        b[i]=j;
        if(i==n) in();
        else quaylui(i+1);
    }
}
main(){
    int t;cin>>t;
    while(t--){
        m=1;h=0;
        cin>>n>>p>>s;
        for(int i=p+1;i<s;i++){
            if(snt(i)) a[m++]=i;
        }
        quaylui(1);
        cout<<h<<endl;
        for(int i=0;i<h;i++) cout<<res[i]<<endl;
    }
}