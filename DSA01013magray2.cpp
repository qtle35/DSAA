#include<bits/stdc++.h> 
using namespace std;
main(){
    int t;cin>>t;
    while(t--){
        string s,res;cin>>s;
        for(int i=0;i<s.size();i++){
            if(i==0) res.push_back(s[0]);
            else{
                if(s[i]==res[i-1]) res+="0";
                else res+="1";
            }
        }
        cout<<res<<endl;
    }
}