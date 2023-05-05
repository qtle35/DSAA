#include <bits/stdc++.h>
using namespace std;
int res=INT_MAX,n;
void quaylui(int i, int d){
    if(i<1||d>=res) return;
    if(i==1){
        res=min(res,d);
        return;
    }
    if(i%3==0) quaylui(i/3,d+1);
    if(i%2==0) quaylui(i/2,d+1);
    quaylui(i-1,d+1);
}
main(){
    int t;cin>>t;
    while(t--){
        res=INT_MAX;
        cin>>n;
        quaylui(n,0);
        cout<<res<<endl;
    }
}