#include<bits/stdc++.h>
using namespace std;
bool comp(long long a, long long b){
    return a>b;
}
main(){
    int t;cin>>t;
    while(t--){
        int n;
        long long p=0,m;
        cin>>n;
        vector <long long>a(n),b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end(),comp);
        for(int i=0;i<n;i++) p+=a[i]*b[i];
        cout<<p<<endl;
    }
}