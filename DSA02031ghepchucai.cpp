#include <bits/stdc++.h>
using namespace std;
int n,b[30];
char a[30],c;
bool kt(){
    for(int i=2;i<n;i++){
        if(a[i]=='A'&&a[i-1]!='E'&&a[i+1]!='E') return 0;
        if(a[i]=='E'&&a[i-1]!='A'&&a[i+1]!='A') return 0;
    }
    return 1;
}
void in(){
    for(int i=1;i<=n;i++) cout<<a[i];
    cout<<endl;
}
void quaylui(int i){
    for(char j='A';j<=c;j++){
        if(!b[j]){
            a[i]=j;b[j]=1;
            if(i==n){
                if(kt()) in();
            }
            else quaylui(i+1);
            b[j]=0;
        }
    }
}
main(){
    cin>>c;
    n=c-64;
    quaylui(1);
}