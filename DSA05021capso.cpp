#include<bits/stdc++.h>
using namespace std;
struct p{
    int x,y;
}; p a[1005];
bool comp(p a, p b){
    return a.x<b.x;
}
main(){
    int t;cin>>t;
    while(t--){
        int n,f[1005]={0};cin>>n;
        for(int i=1;i<=n;i++) cin>>a[i].x>>a[i].y;
        sort(a+1,a+n+1,comp);
        f[1]=1;
        for(int i=1;i<=n;i++){
            for(int j=0;j<i;j++){
                if(a[i].x>a[j].y) f[i]=max(f[i],f[j]+1);
            }
        }
        cout<<f[n]<<endl;
    }
}