#include <bits/stdc++.h>
using namespace std;
main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<string> res;
        queue<string> q;
        q.push("6");
        q.push("8");
        while(1){
            string k=q.front();
            res.push_back(k);
            q.pop();
            if(k.size()<n){
                q.push(k+"6");
                q.push(k+"8");
            }
            else break;
        }
        while(!q.empty()){
            res.push_back(q.front());
            q.pop();
        }
        cout<<res.size()<<endl;
        for(int i=0;i<res.size();i++) cout<<res[i]<<" ";
        cout<<endl;
        res.clear();
    }
}