#include <bits/stdc++.h>
using namespace std;
main(){
    int t;cin>>t;
    while(t--){
        long long n,k,dem=0;cin>>n>>k;
        long long a[n];
        unordered_map<int,int> b;
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++){
            if(b.find(k-a[i])!=b.end()){
                dem+=b[k-a[i]];
            }
            b[a[i]]++;
        }
        cout<<dem<<endl;
    }
    
}