#include <bits/stdc++.h>
using namespace std;
main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        queue<string> q;
        q.push("1");
        while(n--){
            string k=q.front();
            cout<<k<<" ";
            q.pop();
            q.push(k+"0");
            q.push(k+"1");
        }
        cout<<endl;
    }
}