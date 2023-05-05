#include <bits/stdc++.h>
using namespace std;
main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        set<int> b;
        int a[n],l=INT_MAX,r=-INT_MAX;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]<l) l=a[i];
            if(a[i]>r) r=a[i];
            b.insert(a[i]);
        }
        cout<<r-l-b.size()+1<<endl;
    }
}