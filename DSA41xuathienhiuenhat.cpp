#include <bits/stdc++.h>
using namespace std;
main(){
    int t;cin>>t;
    while(t--){
        int n,check=1;cin>>n;
        map<int,int> b;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            b[a[i]]++;
        }
        for(int i=0;i<n;i++){
            if(b[a[i]]>n/2){
                cout<<a[i];
                check=0;
                break;
            }
        }
        if(check) cout<<"NO";
        cout<<endl;
    }
}