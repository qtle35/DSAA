#include<bits/stdc++.h>
using namespace std;
int n,k,b[100];
vector<string> a;
void in(){
    string s="";
    for(int i=1;i<=k;i++){ 
        s+=to_string(b[i])+" ";
        
    }
    a.push_back(s);
}
void quaylui(int i){
    for(int j=b[i-1]+1;j<=n-k+i;j++){
        b[i]=j;
        if(i==k) in();
        else quaylui(i+1);
    }
}
main(){
    int t;cin>>t;
    while(t--){
        cin>>n>>k;
        quaylui(1);
        for(int i=a.size()-1;i>=0;i--) cout<<a[i]<<endl;
        a.clear();
    }
}