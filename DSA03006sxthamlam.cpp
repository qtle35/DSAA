#include <bits/stdc++.h>
using namespace std;
main(){
    int t;cin>>t;
    while(t--){
        int n,ok=1;cin>>n;
        vector<int>a(n),b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
            b[i]=a[i];
        }
        sort(b.begin(),b.end());
        for(int i=0;i<n;i++){
            if(b[i]!=a[i]&&a[i]!=b[n-i-1]){
                ok=0;
                break;
            }
        }
        if(ok) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}