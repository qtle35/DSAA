#include<bits/stdc++.h>
using namespace std;
int x[] = {1, -1, 2, 2, 1, -1, -2, -2};
int y[] = {2, 2, 1, -1, -2, -2, 1, -1};
string s,e;
bool test(char h1, char h2){
    if(h1<='h'&&h1>='a'&&h2<='8'&&h2>='1') return 1;
    return 0;
}
string tiep(string m, int i){
    char h1=m[0]+x[i], h2=m[1]+y[i];
    string k="";
    if(test(h1,h2)) k=k+h1+h2;
    return k;
}
void solution(){
    map<string, int> mp;
    queue<string> q;
    q.push(s);
    mp[s]=0;
    while(!q.empty()){
        string m=q.front();q.pop();
        if(m==e){
            cout<<mp[e]<<endl;
            return;
        }
        for(int i=0;i<8;i++){
            string temp=tiep(m,i);
            if(mp.find(temp)==mp.end()&&temp!=""){
                mp[temp]=mp[m]+1;
                q.push(temp);
            }
        }
    }
}
main(){
    int t;cin>>t;
    while(t--){
        cin>>s>>e;
        solution();
    }
}