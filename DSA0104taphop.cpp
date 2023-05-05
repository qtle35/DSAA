#include <bits/stdc++.h>
using namespace std;
int c[30],n,k,s,dem;
void xuly(){
    int t=0;
    for(int i=1;i<=k;i++) t+=c[i];
    if(t==s) dem++;
}
void quaylui(int i){
    int j;
    for(int j=c[i-1]+1;j<=n-k+i;j++){
        c[i]=j;
        if(i==k) xuly();
        else quaylui(i+1);
    }
}
int main(){
    while(1){
        cin>>n>>k>>s;
        if(!n&&!k&&!s) break;
        c[0]=0;dem=0;
        quaylui(1);
        cout<<dem<<endl;
    }
}
