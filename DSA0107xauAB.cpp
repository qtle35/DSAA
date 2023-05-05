#include <bits/stdc++.h>
using namespace std;
string binaryGen(string &s, int n ){
    int i = n-1;
    while (i > 0 && s[i] == 'B') {
        s[i] = 'A';
        i--;
    }
    s[i] = 'B';
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
            cout<<s<<" ";
            binaryGen(s,n);
        }
        cout<<endl;
    }
    
}