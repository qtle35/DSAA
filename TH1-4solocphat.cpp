#include <bits/stdc++.h> 
using namespace std;
int n,a[100000],m;
string s[1000000];
void quaylui(int i){
    for(int j=6;j<=8;j+=2){
        a[i]=j;
        if(i==n){
            s[m]="";
            for(int i=1;i<=n;i++){
                s[m]+=to_string(a[i]);
            }
            m++;
        }
        else quaylui(i+1);
    }
}
main(){
    int t;cin>>t;
    while(t--){
        m=0;
        cin>>n;
        quaylui(1);
        cout<<m<<endl;
        for(int i=0;i<m;i++) cout<<s[i]<<" ";
        cout<<endl;
    }
}