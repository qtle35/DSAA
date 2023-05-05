#include <bits/stdc++.h>
using namespace std;
bool comp(int a, int b){
    return abs(a)<abs(b);
}
main(){
    int t;cin>>t;
    while(t--){
        int n,k,check=0;cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==k) check=1;
        }
        if(check) cout<<"1";
        else cout<<"-1";
        cout<<endl;
    }
}