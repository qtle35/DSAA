#include <bits/stdc++.h>
using namespace std;
string binaryGen(string &s, int n ){
    int i = n-1;
    while (i > 0 && s[i] == '0') {
        s[i] = '1';
        i--;
    }
    s[i] = '0';
    return s;
}
main(){
    int t;cin>>t;
    while(t--){
        int n,check=0;;string s;
        cin>>s;
        n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]=='1') check=1;
        }
        if(!check){
            for(int i=0;i<n;i++) cout<<1;
            cout<<endl;
        }
        else{
            binaryGen(s,n);
            cout<<s<<endl;
        }
        
    }
}