#include<bits/stdc++.h> 
using namespace std;
main(){
    int t;cin>>t;
    while(t--){
        int n,m,k,h;
        vector<int> res;
        cin>>n>>m>>k;
        int a[n],b[m];
        for(int i=0;i<n;i++){
            cin>>h;
            res.push_back(h);
        }
        for(int i=0;i<m;i++){
            cin>>h;
            res.push_back(h);
        }
        sort(res.begin(),res.end());
        cout<<res[k-1]<<endl;
    }
}