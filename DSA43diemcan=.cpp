#include <bits/stdc++.h>
using namespace std;
main(){
    int t;cin>>t;
    while(t--){
        long long n,check=1,sum=0,lsum=0,vt=0;cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        for(int i=0;i<n;i++){
            sum-=a[i];
            if(lsum==sum){
                vt=i;
                break;
            }
            lsum+=a[i];
        }
        if(vt!=0) cout<<vt+1<<endl;
        else cout<<"-1\n";
    }
}