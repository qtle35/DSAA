#include <bits/stdc++.h> 
using namespace std;
int n,a[100],k,b[100];
void in(){
    for(int i=1;i<=k;i++) cout<<a[b[i]]<<" ";
    cout<<endl;
}
void quaylui(int i){
    for(int j=b[i-1]+1;j<=n-k+i;j++){
        b[i]=j;
        if(i==k) in();
        else quaylui(i+1);
    }
}
main(){
    int t;cin>>t;
    while(t--){
        cin>>n>>k;
        for(int i=1;i<=n;i++) cin>>a[i];
        sort(a+1,a+n+1);
        quaylui(1);
    }
}