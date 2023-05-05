#include<bits/stdc++.h>
using namespace std;
main(){
    int t;cin>>t;
    while(t--){
        string a,b;
        cin>>a>>b;
        long long x=0,y=0;
        reverse(a.begin(),a.end());reverse(b.begin(),b.end());
        for(int i=0;i<a.size();i++){
            if(a[i]=='1') x+=pow(2,i);
        }
        for(int i=0;i<b.size();i++){
            if(b[i]=='1') y+=pow(2,i);
        }
        cout<<x*y<<endl;
    }
}