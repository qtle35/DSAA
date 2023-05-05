#include <bits/stdc++.h>
using namespace std;
stack<int> st;
void show(){
    stack<int> st2=st;
    vector<int> vt;
    while(!st2.empty()){
        vt.push_back(st2.top());
        st2.pop();
    }
    for(int i=vt.size()-1;i>=0;i--) cout<<vt[i]<<" ";
    cout<<endl;
}
main(){
    while(1){
        string s;cin>>s;
        if(s=="push"){
            int a;cin>>a;
            st.push(a);
        }
        else if(s=="pop") st.pop();
        else if(s=="show") show();
        if(st.size()==0){ 
            cout<<"empty";
            break;
        }
    }
}