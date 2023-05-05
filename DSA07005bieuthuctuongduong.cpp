#include <bits/stdc++.h>
using namespace std;
main(){
    int t;cin>>t;
    while(t--){
        string s;cin>>s;
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
            if(s[i]!='('&&s[i]!=')') cout<<s[i];
        }
        cout<<endl;
    }
}