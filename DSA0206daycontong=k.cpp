#include <bits/stdc++.h>
using namespace std;
int a[100],n,k,b[100],m=0;
string s[500];
void xuli(){
    int l=0;
    for(int i=1;i<=n;i++){
        if(a[b[i]]) l+=a[i];
    }
    if(l==k){
        s[m]="";
        for(int i=1;i<=n;i++){
            if(a[b[i]]) s[m]+=to_string(a[i])+" ";
        }
        m++;
    }
}
void quaylui(int i){
    for(int j=0;j<=1;j++){
        b[i]=j;
        if(i==n) xuli();
        else quaylui(i+1);
    }
}
main(){
    m=0;
    cin>>n>>k;
    for(int i=1;i<=n;i++) cin>>a[i];
    sort(a+1,a+n+1);
    quaylui(1);
    if(m==0) cout<<-1;
    else{
        for(int i=0;i<m;i++) cout<<s[i]<<endl;
    }
    cout<<m;
}