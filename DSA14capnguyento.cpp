#include <bits/stdc++.h>
using namespace std;
bool snt(int n){
    if(n<2) return 0;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return 0;
    }
    return 1;
}
main(){
    int t;cin>>t;
    while(t--){
        int n,check=1;cin>>n;
        for(int i=2;i<n-1;i++){
            if(snt(i)&&snt(n-i)){
                cout<<i<<" "<<n-i;
                check=0;
                break;
            }
        }
        if(check) cout<<"-1";
        cout<<endl;
    }
}