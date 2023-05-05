#include <bits/stdc++.h>
using namespace std;
main(){
    int t;cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int a[n],b[m],k;
        set<int>uni;
        set<int>inter;
        for(int i=0;i<n;i++){
            cin>>a[i];
            uni.insert(a[i]);
        }
        for(int i=0;i<m;i++){
            cin>>b[i];
            uni.insert(b[i]);
            if(find(a,a+n,b[i])!=a+n) inter.insert(b[i]);

        }
        for(int x:uni) cout<<x<<" ";
        cout<<endl;
        for(int x:inter) cout<<x<<" ";
        cout<<endl;
    }
}