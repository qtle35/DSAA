#include <bits/stdc++.h>
using namespace std;
int a[20],b[20]={0},n;
string s;
void in(){
    for(int i=1;i<=n;i++) cout<<s[a[i]-1];
    cout<<" ";
}
void quaylui(int i){
    int j;
    for(j=1;j<=n;j++){
        if(!b[j]){
            a[i]=j;b[j]=1;
            if(i==n) in();
            else quaylui(i+1);
            b[j]=0;
        }
    }
}
main(){
    int t;cin>>t;
    while(t--){
        cin>>s;
        n=s.size();
        quaylui(1);
        cout<<endl;
    }
}