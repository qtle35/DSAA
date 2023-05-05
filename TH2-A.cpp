#include <bits/stdc++.h>
using namespace std;
bool kt(string s){
    stack<char> st;
    for(int i=0;i<s.size();i++){
        if(s[i]=='('||s[i]=='{'||s[i]=='[') st.push(s[i]);
        else{
            if(st.empty()) return 0;
            if(!st.empty()&&s[i]==')'&&st.top()=='(') st.pop();
            else if(!st.empty()&&s[i]==']'&&st.top()=='[') st.pop();
            else if(!st.empty()&&s[i]=='}'&&st.top()=='{') st.pop();
            else return 0;
        }
    }
    if(!st.empty()) return 0;
    return 1;
}
main(){
    int t; cin>>t;
    while(t--){
        string s;cin>>s;
        if(kt(s)) cout<<"true";
        else cout<<"false";
        cout<<endl;
    }
}