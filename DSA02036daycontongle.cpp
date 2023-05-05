#include <bits/stdc++.h> 
using namespace std;
int n,a[1000],k,b[1000];
vector<vector<int> >s;
void in(){
    int v=0;
    for(int i=1;i<=k;i++) v+=a[b[i]];
    if(v%2==1){
        vector<int> m;
        for(int i=1;i<=k;i++) m.push_back(a[b[i]]);
        s.push_back(m);
    }
}
void quaylui(int i){
    for(int j=b[i-1]+1;j<=n-k+i;j++){
        b[i]=j;
        if(i==k) in();
        else quaylui(i+1);
    }
}
bool comp(int a,int b){
    return a>b;
}
main(){
    int t;cin>>t;
    while(t--){
        cin>>n;
        for(int i=1;i<=n;i++) cin>>a[i];
        sort(a+1,a+n+1,comp);
        for(k=1;k<=n;k++) quaylui(1);
        sort(s.begin(),s.end());
        for(int i=0;i<s.size();i++){
            for(int j=0;j<s[i].size();j++) cout<<s[i][j]<<" ";
            cout<<endl;
        }
        s.clear();
    }
}