#include <bits/stdc++.h>
using namespace std;
main(){
    int t;cin>>t;
    while(t--){
        int k;cin>>k;
        string s;cin>>s;
        int a[30]={0};
        for(int i=0;i<s.size();i++) a[s[i]-'A']++;
        priority_queue <int> pq;
        for(int i=0;i<26;i++){
            if(a[i]!=0) pq.push(a[i]);
        }
        while(k>0){
            int m=pq.top();
            pq.pop();
            m--;
            pq.push(m);
            k--;
        }
        long long res=0;
        while(pq.size()){
            long long h=pq.top();
            res+=h*h;
            pq.pop();
        }
        cout<<res<<endl;
    }
}