#include <bits/stdc++.h>
using namespace std;
main(){
    int t;cin>>t;
    while(t--){
        string s;cin>>s;
        stack<long long> st;
        for(int i=s.size()-1;i>=0;i--){
            if(isalnum(s[i])){
                st.push((long long)(s[i]-'0'));
            }
            else{
                long long x=st.top();st.pop();
                long long y=st.top();st.pop();
                long long z;
                if(s[i]=='+') z=y+x;
                else if(s[i]=='-') z=x-y;
                else if(s[i]=='*') z=y*x;
                else if(s[i]=='/') z=x/y;
                else if(s[i]=='%') z=x%y;
                else if(s[i]=='^'){
                    z=x;
                    for(int j=0;j<y-1;j++) z*=x;
                }
                st.push(z);
            }
        }
        cout<<st.top()<<endl;
    }
}