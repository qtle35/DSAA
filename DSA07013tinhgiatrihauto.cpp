#include <bits/stdc++.h>
using namespace std;
main(){
    int t;cin>>t;
    while(t--){
        string s;cin>>s;
        stack<long long> st;
        for(int i=0;i<s.size();i++){
            if(isalnum(s[i])){
                st.push((long long)(s[i]-'0'));
            }
            else{
                long long x=st.top();st.pop();
                long long y=st.top();st.pop();
                long long z;
                if(s[i]=='+') z=y+x;
                else if(s[i]=='-') z=y-x;
                else if(s[i]=='*') z=y*x;
                else if(s[i]=='/') z=y/x;
                else if(s[i]=='%') z=y%x;
                else if(s[i]=='^'){
                    z=y;
                    for(int j=0;j<x-1;j++) z*=y;
                }
                // cout<<z<<endl;
                st.push(z);
            }
        }
        cout<<st.top()<<endl;
    }
}