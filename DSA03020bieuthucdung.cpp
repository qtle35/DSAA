#include <bits/stdc++.h>
using namespace std;
int solution(string s){
    stack<int> st;
    int dem=0,res=0;
    for(int i=0;i<s.size();i++){
        if(st.empty()||st.top()==s[i]) st.push(s[i]);
        else if(st.top()=='['&&s[i]==']'){
            st.pop();
            dem+=2;
        }
        else if(st.top()==']'&&s[i]=='['){
            res+=st.size()+dem;
            st.pop();
        }
        if(st.empty()) dem=0;
    }
    return res;
}
main(){
    int t;cin>>t;
    while(t--){
        string s;
        cin>>s;
        cout<<solution(s)<<endl;
    }
}