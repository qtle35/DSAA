#include <bits/stdc++.h>
using namespace std;
#define vt vector<int>
#define mt vector<vt>
#define mts vector<vector<string> >
int n;
mt a;
mts res;
string h="123456789ABCDEF";
int chuyen(string s){
    reverse(s.begin(),s.end());
    int ans=0;
    for(int i=0;i<4;i++){
        if(s[i]=='1') ans+=pow(2,i);
    }
    return ans;
}
string bintohex(string s){
    string ans;
    while(s.size()%4!=0) s="0"+s;
    for(int i=0;i<s.size();i+=4){
        string temp=s.substr(i,4);
        ans+=h[chuyen(temp)-1];
    }
    return ans;
}
string bfs(){
    mt b=mt(n,vt(n,0));
    queue<pair<int,int> > q;
    q.push({0,0});
    res[0][0]=to_string(a[0][0]);
    cout<<1<<endl;
    while(!q.empty()){
        int x=q.front().first,y=q.front().second;
        q.pop();
        if(x+1<n){
            if(!b[x+1][y]) q.push({x+1,y});
            res[x+1][y]=max(res[x][y]+to_string(a[x+1][y]),res[x+1][y]);
        }
        if(y+1<n){
            if(!b[x][y+1]) q.push({x,y+1});
            res[x][y+1]=max(res[x][y]+to_string(a[x][y+1]),res[x][y+1]);
        }
    }
    return bintohex(res[n-1][n-1]);
}
main(){
    cin>>n;
    a=mt(n,vt(n));
    res=mts(n,vector<string>(0,"0"));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++) cin>>a[i][j];
    }
    cout<<bfs();
    cout<<1<<endl;
}