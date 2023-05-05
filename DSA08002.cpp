#include <bits/stdc++.h>
using namespace std;
main(){
    int t;cin>>t;
    cin.ignore();
    queue<int> q;
    while(t--){
        string s;cin>>s;
        if(s=="PUSH"){
            int temp;cin>>temp;
            q.push(temp);
        }
        else if(s=="PRINTFRONT"){
            if(q.size()) cout<<q.front()<<endl;
            else cout<<"NONE"<<endl;
        }
        else if(q.size()) q.pop();
    }
}