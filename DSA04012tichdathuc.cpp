#include<bits/stdc++.h>
using namespace std;
main(){
    int t;cin>>t;
    while(t--){
        int m,n,p[105],q[105],res[1005]={0};
        cin>>n>>m;
        for(int i=0;i<n;i++) cin>>p[i];
        for(int i=0;i<m;i++) cin>>q[i];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                res[i+j]+=p[i]*q[j];
            }
        }
        for(int i=0;i<n+m-1;i++) cout<<res[i]<<" ";
        cout<<endl;
    }
}