#include <bits/stdc++.h>
using namespace std;
bool comp(int a, int b){
    return abs(a)<abs(b);
}
main(){
    int t;cin>>t;
    while(t--){
        int n,x,vt;cin>>n>>x;
        int a[n],b[100000];
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==x) vt=i+1;
        }
        cout<<vt<<endl;
    }
}