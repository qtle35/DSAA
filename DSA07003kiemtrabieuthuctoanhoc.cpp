#include <bits/stdc++.h>
using namespace std;
void kt(string s){
    stack<char> st;
    for(int i=0;i<s.size();i++){
        if(s[i]!=')') st.push(s[i]);
        else{
            int check=0;
            while(!st.empty()){
                char c=st.top();st.pop();
                if(c=='(') break;
                if(c=='+'||c=='*'||c=='/'||c=='-') check=1;
            }
            if(check==0){
                cout<<"Yes";
                return;
            }
        }
    }
    cout<<"No";
}
main(){
    int t;cin>>t;
    while(t--){
        string s;
        scanf("\n");
        getline(cin,s);
        kt(s);
        cout<<endl;
    }
}