#include <bits/stdc++.h>
using namespace std;
int n,x,a[25],c[25],check;
void in(int m){
    check=1;
    cout<<"[";
    for(int i=1;i<m;i++) cout<<c[i]<<" ";
    cout<<c[m]<<"]";
}
void quaylui(int i, int s){
    int j;
    for(int j=1;j<=n;j++){
        if(a[j]>=c[i-1]&&s+a[j]<=x){
            c[i]=a[j];s+=a[j];
            if(s==x) in(i);
            else if(s>x) return;
            else quaylui(i+1,s);
            s-=a[j];
        }
    }
}
main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n>>x;
        for(int i=1;i<=n;i++)cin>>a[i];
        check=0;
        quaylui(1,0);
        if(!check) cout<<-1;
        cout<<endl;
    }
}
