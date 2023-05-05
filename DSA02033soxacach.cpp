#include <bits/stdc++.h>
using namespace std;
int n,b[30],a[30];
bool kt(){
    for(int i=1;i<n;i++){
        if(abs(a[i]-a[i+1])==1) return 0;
    }
    return 1;
}
void in(){
    for(int i=1;i<=n;i++) cout<<a[i];
    cout<<endl;
}
void quaylui(int i){
    for(char j=1;j<=n;j++){
        if(!b[j]){
            a[i]=j;b[j]=1;
            if(i==n){
                if(kt()) in();
            }
            else quaylui(i+1);
            b[j]=0;
        }
    }
}
main(){
    int t;cin>>t;
    while(t--){
        cin>>n;
        quaylui(1);
    }
}