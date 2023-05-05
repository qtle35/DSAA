#include <bits/stdc++.h>
using namespace std;
main(){
    int t;cin>>t;
    while(t--){
        string s;cin>>s;
        stack<char> st;
        int d=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(') st.push(s[i]);
            else{
                if(!st.empty()&&st.top()=='('){ 
                    st.pop();
                    d+=2;
                }
            }
        }
        cout<<d<<endl;
    }
}