#include <bits/stdc++.h>
using namespace std;
int dung(string s){
    stack<pair<char,int>> st;
    int m=0,res=0;
    st.push({' ',0});
    for(int i=0;i<s.size();i++){
        if(s[i]=='('){
            int tmp=st.top().second;
            res=max(res,m-tmp);
            st.push({s[i],tmp+1});
        }
        else if(s[i]==')'){
            if(!st.empty()&&st.top().first=='('){
                m=max(m,st.top().second);
                st.pop();
            }
        }
    }
    if(st.size()==1) return max(res,m);
    return -1;
}
main(){
    int t;cin>>t;
    while(t--){
        string s;cin>>s;
        cout<<dung(s)<<endl;
    }
}