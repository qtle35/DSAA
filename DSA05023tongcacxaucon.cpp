#include<bits/stdc++.h>
using namespace std;
main(){
    int t;cin>>t;
    while(t--){
        string s;cin>>s;
        long long n=s.size();
        long long a[n+1];
        a[0]=s[0]-'0';
        long long res=a[0];
        for(int i=1;i<n;i++){
            a[i]=10*a[i-1]+(s[i]-'0')*(i+1);
            res+=a[i];
        }
        cout<<res<<endl;
    }
}