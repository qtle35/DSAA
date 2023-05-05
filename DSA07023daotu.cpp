#include <bits/stdc++.h>
using namespace std;
main(){
    int t;cin>>t;
    while(t--){
        string s,token;
        scanf("\n");
        getline(cin,s);
        stack<string> st;
        stringstream ss(s);
        while(ss>>token){
            st.push(token);
        }
        while(!st.empty()){
            cout<<st.top()<<" ";
            st.pop();
        }
        cout<<endl;
    }
}