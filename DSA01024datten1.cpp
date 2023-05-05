#include <bits/stdc++.h>
using namespace std;
int n,k, a[100];
string c[100];
vector <string> res;
void in(){
    int check=1;
    string s="";
    for(int i=1;i<k;i++){
        if(c[a[i]]==c[a[i+1]]) check=0;
    }
    if(check){
        for(int i=1;i<=k;i++) s+=c[a[i]]+" ";
    }
    for(int i=0;i<res.size();i++){
        if(s==res[i]) check=0;
    }
    if(check) res.push_back(s);
}
void quaylui(int i){
    for(int j=a[i-1]+1;j<=n-k+i;j++){
        a[i]=j;
        if(i==k) in();
        else quaylui(i+1);
    }
}
main(){
    cin>>n>>k;
    for(int i=1;i<=n;i++) cin>>c[i];
    sort(c+1,c+n+1);
    quaylui(1);
    for(int i=0;i<res.size();i++) cout<<res[i]<<endl;
}