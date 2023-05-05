#include <bits/stdc++.h>
using namespace std;
main(){
    int t;cin>>t;
    while(t--){
        int n,dif=INT_MAX;cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        for(int i=0;i<n-1;i++){
            dif=min(dif,a[i+1]-a[i]);
        }
        cout<<dif<<endl;
    }
}