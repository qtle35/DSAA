#include <bits/stdc++.h> 
using namespace std;
int n,a[105];
char c;
vector<string> v;
void kt(){
    int dx=0,d0=0,dxm=0,d0m=0;
    for(int i=0;i<n;i++){
        if(a[i]){
            d0=0;dx++;
            dxm=max(dxm,dx);
        }
        else{
            dx=0;d0++;
            d0m=max(d0,d0m);
        }
    }
    if(dxm>d0m&&dxm>4){
        string s="";
        if(c=='X'){
            for(int i=0;i<n;i++){
                if(a[i]) s+="X";
                else s+="O";
            }
        }
        else{
            for(int i=0;i<n;i++){
                if(a[i]) s+="O";
                else s+="X";
            }
        }
        v.push_back(s);
    }
}
void quaylui(int i){
    for(int j=0;j<=1;j++){
        a[i]=j;
        if(i==n-1){
            kt();
        }
        else quaylui(i+1);
    }
}
main(){
    int t;cin>>t;
    while(t--){
        cin>>n>>c;
        quaylui(0);
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<endl;
        }
        v.clear();
    }
}