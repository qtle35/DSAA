#include <bits/stdc++.h> 
using namespace std; 
int x[500],n,ok,temp,s;
void Try(int i,int k){ 
    if(k==s/2) {ok=1;return;}
    if(ok) return;
    for(int j=i;j<=n;j++){
        if(k+x[j]<=s/2) Try(i+1,k+x[j]);
    }
} 
int main(){ 
    int t; cin>>t; 
    while(t--){ 
        s=0; ok=0; cin>>n; 
        for(int i=1;i<=n;i++){ 
            cin>>x[i];
            s+=x[i]; 
        } 
        if(s%2 == 1) cout<<"NO"<<endl;
        else{ 
            Try(1,0); 
            if(ok) cout<<"YES"<<endl; 
            else cout<<"NO"<<endl; 
        } 
    } 
}