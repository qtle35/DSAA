#include <bits/stdc++.h>
using namespace std;
stack<int> st;
void show(){
    if(st.size()==0) cout<<"NONE"<<endl;
    else cout<<st.top()<<endl;
}
main(){
    int t;cin>>t;
    while(t--){
        string s;cin>>s;
        if(s=="PUSH"){
            int a;cin>>a;
            st.push(a);
        }
        else if(s=="POP"){
            if(st.size()!=0) st.pop();
        }
        else show();
    }
}