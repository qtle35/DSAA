#include <bits/stdc++.h>
using namespace std;
struct edge{
    int fir,en,var;
};
int v,e;
vector<edge> vv;
int p[1005];
int find(int x){
    if(p[x]==-1) return x;
    return find(p[x]);
}
void unionl(int x, int y){
    p[x]=y;
}
bool cycle(vector<edge> ve){
    memset(p,-1,sizeof(p));
    for(int i=0;i<ve.size();i++){
        int x=find(ve[i].fir);
        int y=find(ve[i].en);
        if(x==y) return 1;
        unionl(x,y);
    }
    return 0;
}
bool cmp(edge e, edge ee){
    return e.var<ee.var;
}
void solution(){
    cin>>v>>e;
    vv.clear();
    for(int i=0;i<e;i++){
        edge tt;cin>>tt.fir>>tt.en>>tt.var;
        vv.push_back(tt);
    }
    vector<edge> vvv;
    sort(vv.begin(),vv.end(),cmp);
    vvv.push_back(vv[0]);
    int sum=vv[0].var;
    for(int i=1;i<vv.size();i++){
        vvv.push_back(vv[i]);
        if(cycle(vvv)){
            vvv.pop_back();
        }
        else sum+=vv[i].var;
    }
    cout<<sum<<endl;
}
main(){
    int t; cin>>t;
    while(t--){
        solution();
    }
}