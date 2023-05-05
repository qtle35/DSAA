#include<bits/stdc++.h>
using namespace std;
main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        queue<string> q;
        q.push("6");
        q.push("8");
        while(n--){
            string s=q.front();
            cout<<s;
            for(int i=s.size()-1;i>=0;i--) cout<<s[i];
            cout<<" ";
            q.pop();
            q.push(s+"6");
            q.push(s+"8");
        }
        cout<<endl;
    }
}