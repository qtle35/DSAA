#include <bits/stdc++.h>
using namespace std;
string binaryGen(string &s, int n ){
    int i = n-1;
    while (i > 0 && s[i] == '1') {
        s[i] = '0';
        i--;
    }
    s[i] = '1';
    return s;
}
bool tn(string s){
    for(int i=0;i<s.size()/2;i++){
        if(s[i]!=s[s.size()-i-1]) return 0;
    }
    return 1;
}
main(){;
    int n;cin>>n;
    int m=pow(2,n);
    string s="";
    for(int i=0;i<n;i++) s+="0";
    while(m--){
        if(tn(s)){
            for(int i=0;i<n;i++) cout<<s[i]<<" ";
            cout<<endl;
        }
        binaryGen(s,n);
    }
}