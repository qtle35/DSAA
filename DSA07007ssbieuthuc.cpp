#include <bits/stdc++.h>
using namespace std;
string ch(string s){
    string res="";
    stack<char> st;
    for(int i=0;i<s.size();i++){
        if(s[i]=='('){ 
            if(s[i-1]=='+'||s[i-1]=='-') st.push(s[i-1]);
        }
        if(st.size()&&st.top()=='-'){
            if(s[i]=='+') s[i]='-';
            else if(s[i]=='-') s[i]='+';
        }
        if(s[i]==')'&&st.size()) st.pop();
    }
    for(int i=0;i<s.size();i++){
        if(s[i]!='('&&s[i]!=')') res+=s[i];
    }
    return res;
}
main(){
    int t;cin>>t;
    while(t--){
        string s1,s2,res1,res2;cin>>s1>>s2;
        res1=ch(s1);res2=ch(s2);
        if(res1==res2) cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }
}