#include<bits/stdc++.h> 
using namespace std;
main(){
    int t;cin>>t;
    while(t--){
        int n,h,res=-1,k;
        cin>>n>>k;
        for(int i=0;i<n;i++){
            cin>>h;
            if(h==k) res=i+1;
        }
        if(res==-1) cout<<"NO";
        else cout<<res;
        cout<<endl;
    }
}