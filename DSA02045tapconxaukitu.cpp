#include <bits/stdc++.h> 
using namespace std;
int n,a[100],k;
string s;
set <string> res;
void quaylui(int i){
    for(int j=a[i-1]+1;j<=n-k+i;j++){
        a[i]=j;
        if(i==k){
            string v="";
            for(int l=1;l<=k;l++){ 
                v+=s[a[l]-1];
            }
            res.insert(v);
        }
        else quaylui(i+1);
    }
}
main(){
    int t;cin>>t;
    while(t--){
        res.clear();
        cin>>n;cin>>s;
        for(k=1;k<=n;k++) quaylui(1);
        for(string x:res) cout<<x<<" ";
        cout<<endl;
    }
}