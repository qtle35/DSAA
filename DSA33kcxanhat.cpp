#include <bits/stdc++.h>
using namespace std;
main(){
    int t;cin>>t;
    while(t--){
        int n,k,maxdis=0;cin>>n;
        int a[n],b[n];
        for(int i=0;i<n;i++) cin>>a[i];
        b[0]=a[0];
        for(int i=1;i<n;i++){
            b[i]=min(b[i-1],a[i]);
        }
        int i=n-1,j=n-1;
        while(i>=0&&j>=0){
            if(a[i]>b[j]){
                maxdis=max(maxdis,i-j);
                    j--;
            }
            else i--;
        }
        if(maxdis!=0) cout<<maxdis<<endl;
        else cout<<"-1\n";
    }
    
}