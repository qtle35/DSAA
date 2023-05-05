#include <bits/stdc++.h> 
using namespace std;
int n,k,a[50],m=0;
string s[1000000];
void xl(){
    s[m]="";
    for(int i=1;i<=k;i++) s[m]+=to_string(a[i])+" ";
    m++;
}
void quaylui(int i){
    for(int j=a[i-1]+1;j<=n-k+i;j++){
        a[i]=j;
        if(i==k) xl();
        else quaylui(i+1);
    }
}
main(){
    int t;cin>>t;
    while(t--){
        m=0;
        cin>>n>>k;
        quaylui(1);
        for(int i=m-1;i>=0;i--) cout<<s[i]<<endl;
    }
}