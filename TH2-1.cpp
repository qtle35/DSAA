#include<bits/stdc++.h>
using namespace std;
main(){
    string s;cin>>s;
    int d=0;
    stack<char> st;
    for(int i=0;i<s.size();i++){
        if(s[i]=='('||s[i]=='[') st.push(s[i]);
        else{
            if(!st.empty()){
                if(s[i]==']'&&st.top()=='[') d++;
                st.pop();
            }
            else d=0;
        }
    }
    cout<<d<<endl;
}