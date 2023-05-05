#include <bits/stdc++.h>
using namespace std;
main(){
    int t;cin>>t;
    while(t--){
        int n,vtmin,dem=0;cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n-1;i++){
            vtmin=i;
            for(int j=i+1;j<n;j++){
                if(a[vtmin]>a[j]) vtmin=j;
            }
            swap(a[i],a[vtmin]);
            if(vtmin!=i) dem++;
        }
        cout<<dem<<endl;
    }
    
}