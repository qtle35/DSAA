#include <bits/stdc++.h>
using namespace std;
main(){
    int t;cin>>t;
    while(t--){
        int n,m,k;cin>>n>>m;
        vector<int> a;
        for(int i=0;i<n;i++){
            cin>>k;
            a.push_back(k);
        }
        for(int i=0;i<m;i++){
            cin>>k;
            a.push_back(k);
        }
        sort(a.begin(),a.begin()+n+m);
        for(int i=0;i<m+n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}