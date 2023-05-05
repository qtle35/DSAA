#include<bits/stdc++.h>
using namespace std;
main(){
    int t;cin>>t;
    while(t--){
        string s;
        cin>>s;
        stack<string> st;
        for(int i=0;i<s.size();i++){
            if(isalnum(s[i])){
                string k;
                k.push_back(s[i]);
                st.push(k);
            }
            else{
                string dau,x,y;
                dau.push_back(s[i]);
                x=st.top();st.pop();
                y=st.top();st.pop();
                string ans=y+dau+x;
                st.push(ans);
            }
        }
        cout<<st.top()<<endl;
    }
}