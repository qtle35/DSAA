#include<bits/stdc++.h>
using namespace std;
int n,k,sum,ans,a[1005];
void quaylui(int i, int s,int cnt){
    if(cnt==k&&i==n) ans++;
    if(i>=n||cnt>=k) return;
    if(sum==s+a[i]) quaylui(i+1,0,cnt+1);
    quaylui(i+1,s+a[i],cnt);
}
main(){
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    if(sum%k!=0){
        cout<<0;
    }
    else{
        sum/=k;
        quaylui(0,0,0);
        cout<<ans;
    }
}