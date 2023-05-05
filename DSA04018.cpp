#include<bits/stdc++.h> 
using namespace std;
main(){
    int t;cin>>t;
    while(t--){
        int n,h,dem=0;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>h;
            if(!h) dem++;
        }
        cout<<dem<<endl;
    }
}