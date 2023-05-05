#include <bits/stdc++.h>
using namespace std;
int tinh(string s){
    int b[1005]={0},d=0,res=0;
    for(int i=0;i<s.size();i++){
        if(s[i]==']') d++;
        b[i]=d;
    }
    stack<int> st;
    for(int i=0;i<s.size();i++){
        if(s[i]=='('||s[i]=='[') st.push(i);
        else{
            if(!st.empty()&&((s[st.top()]=='('&&s[i]==')')||(s[st.top()]=='['&&s[i]==']'))){
                st.pop();
                if(!st.empty()) res=max(res,b[i]-b[st.top()]);
                else st.push(i);
            }
            else st.push(i);
        }
    }
    return res;
}
main(){
    string s;
    cin>>s;
    cout<<tinh(s)<<endl;
}