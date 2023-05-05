#include<bits/stdc++.h> 
using namespace std;
main(){
    int t;cin>>t;
    while(t--){
        int n,h,kq=0,check=1;;cin>>n;
        vector<long long>a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n-1;i++){
            cin>>h;
            if(h!=a[i]&&check) {
                kq=i+1;
                check=0;
            }
        }
        cout<<kq<<endl;
    }
}