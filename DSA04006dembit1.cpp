#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll N,L,R;
ll dodai(ll n){
    if(n==1||n==0) return 1;
    ll temp=dodai(n/2);
    return 2*temp+1;
}
ll dembit(ll n, ll l, ll r){
    if(l>R||r<L) return 0;
    if(l>=L&&r<=R) return n;
    ll mid=(l+r)/2;
    if(mid>=L&&mid<=R) return dembit(n/2,l,mid-1)+dembit(n/2,mid+1,r)+n%2;
    else return dembit(n/2,l,mid-1)+dembit(n/2,mid+1,r);
}
main(){
    int t;cin>>t;
    while(t--){
        cin>>N>>L>>R;
        cout<<dembit(N,1,dodai(N))<<endl;
    }
}