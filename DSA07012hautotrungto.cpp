#include <bits/stdc++.h>
using namespace std;
main(){
    int t;cin>>t;
    while(t--){
        string s;cin>>s;
        stack<string> st;
        for(int i=0;i<s.size();i++){
            if(isalpha(s[i])){
                st.push(string(1,s[i]));
            }
            else{
                string x=st.top();st.pop();
                string y=st.top();st.pop();
                string z="("+y+s[i]+x+")";
                st.push(z);
            }
        }
        cout<<st.top()<<endl;
    }
}