#include <bits/stdc++.h>
using namespace std;
main(){
    int t;cin>>t;
    while(t--){
        int n,m;cin>>n>>m;
        long long a[n],b[m],min=INT_MAX,max=-INT_MAX;  
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]>max) max=a[i];
        }
        for(int i=0;i<m;i++){
            cin>>b[i];
            if(b[i]<min) min=b[i];
        }
        cout<<max*min<<endl;
    }
}