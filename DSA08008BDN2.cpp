#include <bits/stdc++.h>
using namespace std;
main(){
    int t;cin>>t;
    while(t--){
        long long n,d=0;cin>>n;
        queue<long long> q;
        q.push(1);
        while(1){
            long long k=q.front();
            if(k%n==0){
                cout<<k;break;
            }
            q.pop();
            q.push(k*10+0);
            q.push(k*10+1);
        }
        cout<<endl;
    }
}