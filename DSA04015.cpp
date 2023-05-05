#include<bits/stdc++.h> 
using namespace std;
main(){
    int t;cin>>t;
    while(t--){
        int n,check=1;
        long long x,res=-1;
        cin>>n>>x;
        long long a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]<=x) res=i+1;
        }
        cout<<res<<endl;
    }
}