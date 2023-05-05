#include <bits/stdc++.h>
using namespace std;
main(){
    int t;cin>>t;
    map<char, int> a;
    a['+']=1;a['-']=1;a['*']=2;a['/']=2;a['^']=3;a['%']=2;
    while(t--){
        stack<char> st;
        string s;cin>>s;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(') st.push(s[i]);
            else if(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/'||s[i]=='%'||s[i]=='^'){
                while(!st.empty()&&a[s[i]]<=a[st.top()]){
                    cout<<st.top();
                    st.pop();
                }
                st.push(s[i]);
            }
            else if(s[i]==')'){
                while(!st.empty()&&st.top()!='('){
                    cout<<st.top();
                    st.pop();
                }
                st.pop();
            }
            else cout<<s[i];
        }
        while(!st.empty()){
            if(st.top()!='(') cout<<st.top();
            st.pop();
        }
        cout<<endl;
    }
}