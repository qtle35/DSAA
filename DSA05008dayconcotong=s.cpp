#include <bits/stdc++.h>
using namespace std;
main(){
    int t;cin>>t;
    while(t--){
        int n,s;
        cin>>n>>s;
        int a[205],b[50000];
        memset(b,0,sizeof(b));
        for(int i=0;i<n;i++) cin>>a[i];
        b[0]=1;
        for(int i=0;i<n;i++){
            for(int j=s;j>=a[i];j--){
                if(b[j-a[i]]==1) b[j]=1;
            }
        }
        if(b[s]==1) cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }
}