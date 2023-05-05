#include <bits/stdc++.h>
using namespace std;
int n,k, a[100],b[100]={0},c[100],dem;
void in(){
    int check=0;
    dem++;
    for(int i=1;i<=k;i++){
        if(a[i]!=c[i]){
            check=1;
            break;
        }
    }
    if(!check) cout<<dem;
}
void quaylui(int i){
    for(int j=a[i-1]+1;j<=n-k+i;j++){
        a[i]=j;
        if(i==k) in();
        else quaylui(i+1);
    }
}
main(){
    int t;cin>>t;
    while(t--){
        dem=0;
        cin>>n>>k;
        for(int i=1;i<=k;i++) cin>>c[i];
        quaylui(1);
        cout<<endl;
    }
}