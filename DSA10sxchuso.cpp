#include <bits/stdc++.h>
using namespace std;
main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        set<int> res;
        string s[n];
        for(int i=0;i<n;i++){
            cin>>s[i];
            for(int j=0;j<s[i].size();j++){
                res.insert(s[i][j]-'0');
            }
        }
        for(int x:res) cout<<x<<" ";
        cout<<endl;
    }
}