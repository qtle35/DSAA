#include <bits/stdc++.h>
using namespace std;
int n, a[100],b[100]={0},c[100];
vector <string> res;
void in(){
    for(int i=1;i<=n;i++) cout<<c[a[i]]<<" ";
    cout<<endl;
}
void quaylui(int i){
    for(int j=1;j<=n;j++){
        if(!b[j]){
            a[i]=j;b[j]=1;
            if(i==n) in();
            else quaylui(i+1);
            b[j]=0;
        }
    }
}
main(){
    cin>>n;
    for(int i=1;i<=n;i++) cin>>c[i];
    sort(c+1,c+n+1);
    quaylui(1);
}