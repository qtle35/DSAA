#include <bits/stdc++.h>
using namespace std;
int n, a[100],b[100]={0},c[100],dem;
void in(){
    int check=0;
    dem++;
    for(int i=1;i<=n;i++){
        if(a[i]!=c[i]){
            check=1;
            break;
        }
    }
    if(!check) cout<<dem;
}
void quaylui(int i){
    for(int j=1;j<=n;j++){
        if(!b[j]){
            a[i]=j;b[j]=1;
            if(i==n) in();
            else quaylui(i+1);
            b[j]=0;
        }
    }
}
main(){
    int t;cin>>t;
    while(t--){
        dem=0;
        cin>>n;
        for(int i=1;i<=n;i++) cin>>c[i];
        quaylui(1);
        cout<<endl;
    }
}