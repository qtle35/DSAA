#include <bits/stdc++.h>
using namespace std;
main(){
    int t;cin>>t;
    while(t--){
        int v,e,k=0;
        vector<int> a[1005];
        cin>>v>>e;
        for(int i=0;i<e;i++){
            int x,y;cin>>x>>y;
            a[x].push_back(y);
            a[y].push_back(x);
        }
        for(int i=1;i<=v;i++){
            if(a[i].size()%2!=0) k++;
        }
        if(k==0) cout<<"2\n";
        else if(k==2) cout<<"1\n";
        else cout<<"0\n";
    }
}