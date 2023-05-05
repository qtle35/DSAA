#include<bits/stdc++.h>
using namespace std;
main(){
    int t;cin>>t;
    while(t--){
        int n,a[105],res=0;cin>>n;
        for(int i=1;i<=n;i++) cin>>a[i];
        int l[105]={0},r[105]={0};
        for(int i=1;i<=n;i++){
            l[i]=a[i];
            for(int j=1;j<i;j++){
                if(a[j]<a[i]) l[i]=max(l[i],l[j]+a[i]);
            }
        }
        for(int i=n+1;i>=1;i--){
            r[i]=a[i];
            for(int j=n+1;j>i;j--){
                if(a[j]<a[i]) r[i]=max(r[i],r[j]+a[i]);
            }
        }
        for(int i=1;i<=n;i++){
            res=max(res,l[i]+r[i]-a[i]);
        }
        cout<<res<<endl;
    }
}