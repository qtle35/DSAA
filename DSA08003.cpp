#include <bits/stdc++.h>
using namespace std;
main(){
    int t;cin>>t;
    cin.ignore();
    deque<int> q;
    while(t--){
        string s;cin>>s;
        if(s=="PUSHFRONT"){
            int temp;cin>>temp;
            q.push_front(temp);
        }
        else if(s=="PUSHBACK"){
            int temp;cin>>temp;
            q.push_back(temp);
        }
        else if(s=="PRINTFRONT"){
            if(q.size()) cout<<q.front()<<endl;
            else cout<<"NONE"<<endl;
        }
        else if(s=="PRINTBACK"){
            if(q.size()) cout<<q.back()<<endl;
            else cout<<"NONE"<<endl;
        }
        else if(s=="POPFRONT"&&q.size()) q.pop_front();
        else if(s=="POPBACK"&&q.size()) q.pop_back();
    }
}