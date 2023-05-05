#include<bits/stdc++.h>
using namespace std;
int a[10],b[10];
int d1[7]={0,1,5,2,4,6,3};
int d2[7]={0,4,1,3,5,2,6};
string xuli1(string u){
    u='0'+u;
    string s="";
    for(int i=1;i<=6;i++) s+=u[d1[i]];
    return s;
}
string xuli2(string u){
    u='0'+u;
    string s="";
    for(int i=1;i<=6;i++) s+=u[d2[i]];
    return s;
}
void solution(){
    int d=0;
    map<string,int> m;
    queue<string> q;
    string st="",en="";
    for(int i=1;i<=6;i++) st+=(char)(a[i]+48);
    for(int i=1;i<=6;i++) en+=(char)(b[i]+48);
    m[st]=1;
    q.push(st);
    while(!q.empty()){
        string u=q.front();q.pop();
        if(u==en){
            cout<<m[en]-1<<endl;
            return;
        }
        string temp="";
        temp=xuli1(u);
        if(m.find(temp)==m.end()){
            m[temp]=m[u]+1;
            q.push(temp);
        }
        temp=xuli2(u);
        if(m.find(temp)==m.end()){
            m[temp]=m[u]+1;
            q.push(temp);
        }
    }
}
main(){
    int t;cin>>t;
    while(t--){
        for(int i=1;i<=6;i++) cin>>a[i];
        for(int i=1;i<=6;i++) cin>>b[i];
        solution();
    }
}