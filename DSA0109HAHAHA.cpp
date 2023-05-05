#include <bits/stdc++.h>
using namespace std;
bool check(string s){
    if(!(s[0]=='H'&&s[s.size()-1]=='A')) return 0;
    for(int i=0;i<s.size()-1;i++){
        if(s[i]=='H'&&s[i+1]=='H') return 0;
    }
    return 1;
}
string binaryGen(string &s, int n ){
    int i = n-1;
    while (i > 0 && s[i] == 'H') {
        s[i] = 'A';
        i--;
    }
    s[i] = 'H';
    return s;
}
main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int m=pow(2,n);
        string s="";
        for(int i=0;i<n;i++) s+="A";
        while(m--){
            if(check(s))  cout<<s<<endl;
            binaryGen(s,n);
        }
    }
}