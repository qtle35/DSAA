#include <bits/stdc++.h>
using namespace std;
void binanext(string s){
    int i;
    for(i=s.size()-1;i>=0;i--){
        if(s[i]=='0'){
            s[i]='1';
            break;
        }
    }
    for(int j=i+1;j<s.size();j++) s[j]='0';
    cout<<s<<endl;
}
main(){
    int t;cin>>t;
    while(t--){
        string s;cin>>s;
        binanext(s);
    }
}