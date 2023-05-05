#include <bits/stdc++.h>
using namespace std;
bool kt(string s){
    stack <char> st; char c;
    int n=s.size();
    for(int i=0;i<n;i++){
        c=s[i];
        if(c=='('||c=='{'||c=='[') st.push(c);
        else{
            if(!st.empty()&&c==')'&&st.top()=='(') st.pop();
            else if(!st.empty()&&c==']'&&st.top()=='[') st.pop();
            else if(!st.empty()&&c=='}'&&st.top()=='{') st.pop();
            else return 0;
        }
    }
    return 1;
}
main(){
    int t; cin>>t;
    while(t--){
        string s;cin>>s;
        if(kt(s)) cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }
}