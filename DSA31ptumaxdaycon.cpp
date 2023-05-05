#include <bits/stdc++.h>
using namespace std;
main(){
    int t;cin>>t;
    while(t--){
        int n,k,m=0;cin>>n>>k;
        int a[n],b[n-k+1];
        for(int i=0;i<n;i++) cin>>a[i];
        int l=0,r=k;
        while(r<=n){
            int max=a[l];
            for(int i=l+1;i<r;i++){
                if(a[i]>max) max=a[i];
            }
            b[m++]=max;
            l++;r++;
        }
        for(int i=0;i<n-k+1;i++) cout<<b[i]<<" ";
        cout<<endl;
    }
}