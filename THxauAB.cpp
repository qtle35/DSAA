#include <bits/stdc++.h>
using namespace std;
int n,m=0;
char a[100];
void in(){
    if(m==0){
        for(int i=1;i<=n;i++) cout<<a[i];
        m++;
    }
    else{
        cout<<",";
        for(int i=1;i<=n;i++) cout<<a[i];  
    }
    
}
void quaylui(int i){
    for(char j='A';j<='B';j++){
        a[i]=j;
        if(i==n) in();
        else quaylui(i+1);
    }
}
main(){
    int t;cin>>t;
    while(t--){
        m=0;
        cin>>n;
        quaylui(1);
        cout<<endl;
    }
}