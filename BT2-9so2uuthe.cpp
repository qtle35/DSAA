#include<bits/stdc++.h>
using namespace std;
vector<string> res;
void lk(){
    queue<pair<string,int> > q;
    q.push({"", 0});
    while(1){
        string s=q.front().first;
        int d=q.front().second;
        if(s[0]!='0'&&d>s.size()/2) res.push_back(s);
        if(res.size()>1000) return;
        q.pop();
        q.push({s+"0",d});
        q.push({s+"1",d});
        q.push({s+"2",d+1});
    }
}
main(){
    int t;cin>>t;
    lk();
    while(t--){
        int n;cin>>n;
        for(int i=0;i<n;i++) cout<<res[i]<<" ";
        cout<<endl;
    }
}