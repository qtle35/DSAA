#include <bits/stdc++.h>
using namespace std;
void solution(string s){
    stack<char> st;
    int d=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='(') st.push(s[i]);
        else{
            if(!st.empty()) st.pop();
            else{
                st.push('(');
                d++;
            }
        }
    }
    cout<<d+st.size()/2;
}
main(){
    int t;cin>>t;
    while(t--){
        string s;cin>>s;
        solution(s);
        cout<<endl;
    }
}