#include <bits/stdc++.h>
using namespace std;
main(){
    int t;cin>>t;
    while(t--){
        int i,n,s,m,k=0,h=0;
        cin>>n>>s>>m;
        if(s*m>(s-s/7)*n) cout<<-1<<endl;
        else{
            for(i=1;i<=s-s/7;i++){
                if(n*i>=s*m) {
                    cout<<i<<endl;
                    break;
                }
            }
        }
    }
}