#include <bits/stdc++.h>
using namespace std;
main(){
   long long a,b;cin>>a>>b;
    queue<long long> q;
    q.push(4);q.push(7);
    vector<long long> v;
    while(1){
        long long x=q.front();q.pop();
        v.push_back(x);
        if(x>b) break;
        q.push(x*10+4);
        q.push(x*10+7);
    }
    long long res=0,d=0;
    long long i=lower_bound(v.begin(),v.end(),a)-v.begin();
    while(a<=b){
        d=min(v[i],b)-a+1;
        a=v[i]+1;
        res+=d*v[i++];
    }
    cout<<res;
}