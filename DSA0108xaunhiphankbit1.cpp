#include <bits/stdc++.h>
using namespace std;
bool check(string s,int k){
    int dem=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='1') dem++;
    }
    if(dem==k) return 1;
    return 0;
}
string binaryGen(string &s, int n ){
    int i = n-1;
    while (i > 0 && s[i] == '1') {
        s[i] = '0';
        i--;
    }
    s[i] = '1';
    return s;
}
main(){
    int t;cin>>t;
    while(t--){
        int n,k;cin>>n>>k;
        int m=pow(2,n);
        string s="";
        for(int i=0;i<n;i++) s+="0";
        while(m--){
            if(check(s,k)) cout<<s<<endl;
            binaryGen(s,n);
        }
        cout<<endl;
    }
}