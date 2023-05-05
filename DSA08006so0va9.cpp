#include <bits/stdc++.h>
using namespace std;
main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        queue<long long> q;
        q.push(9);
        while(1){
            long long k=q.front();
            if(k%n==0){
                cout<<k;break;
            }
            q.pop();
            q.push(k*10+0);
            q.push(k*10+9);
        }
        cout<<endl;
    }
}