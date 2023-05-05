#include<bits/stdc++.h>
using namespace std;
main(){
    int t;cin>>t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin,s);
        stack<int> st;
        int d=1;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                cout<<d<<" ";
                st.push(d++);
            }
            else if(s[i]==')'){
                cout<<st.top()<<" ";
                st.pop();
            }
        }
        cout<<endl;
    }
}