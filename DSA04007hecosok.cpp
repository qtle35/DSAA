#include<bits/stdc++.h>
using namespace std;
main(){
    int t;cin>>t;
    while(t--){
        int k;
        string a,b;
        cin>>k>>a>>b;
        while(a.size()<b.size()) a="0"+a;
        while(a.size()>b.size()) b="0"+b;
        string res="";
        int nho=0;
        for(int i=a.size()-1;i>=0;i--){
            int so= int(a[i]-'0')+ int(b[i]-'0') +nho;
            res=char(so%k +'0') +res;
            nho=so/k;
        }
        if(nho>0) res=char(nho+'0')+res;
        cout<<res<<endl;
    }
    
}