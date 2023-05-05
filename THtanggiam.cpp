#include <bits/stdc++.h>
using namespace std;
main(){
    int t;cin>>t;
    while(t--){
        int n,kq=0,f[1001];
        double a[1001],b[1001];
        cin>>n;
        for(int i=0;i<n;i++) {
            cin>>a[i];cin>>b[i];
        }
        for(int i=0;i<n;i++){
            f[i]=1;
            for(int j=0;j<i;j++){
                if(a[j]<a[i]&&b[j]>b[i]) f[i]=max(f[i],f[j]+1);
            }
            kq=max(kq,f[i]);
        }
        cout<<kq<<endl;
    }
    
}