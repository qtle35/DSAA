#include<bits/stdc++.h>
using namespace std;
int n,a[10005];
void qhd(){
    a[1]=1;a[2]=2;a[3]=3;
    for(int i=4;i<=10000;i++){
        a[i]=i;
        for(int j=1;j<=sqrt(i);j++){
            a[i]=min(a[i],a[i-j*j]+1);
        }
    }
}
main(){
    int t;cin>>t;
    qhd();
    while(t--){
        cin>>n;
        cout<<a[n]<<endl;
    }
}