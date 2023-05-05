#include <bits/stdc++.h>
using namespace std;
main(){
    int t;cin>>t;
    while(t--){
        int n,k,dem=0,check=1;cin>>n>>k;
        int a[k];
        vector<int> b(k);
        for(int i=0;i<k;i++) {
            cin>>a[i];b.push_back(a[i]);
        }
        int i=k-1;
        while(i>=0&&a[i]>=n-k+i+1) i--;
        if(i<0){
            cout<<k<<endl;
            check=0;
        }
        a[i]++;
        for(int j=i+1;j<k;j++){
            a[j]=a[i]+j-i;
        }
        for(int j=0;j<k;j++){
            if(find(b.begin(),b.end(),a[j])!=b.end()) dem++;
        }
        if(check) cout<<k-dem<<endl;
    }
}