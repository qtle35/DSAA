#include<bits/stdc++.h>
using namespace std;
main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        string s;cin>>s;
        int f[26];memset(f,0,sizeof(f));
        for(int i=0;i<s.size();i++) f[s[i]-'A']++;
        priority_queue<int> p;
        long long res=0;
        for(int i=0;i<26;i++) p.push(f[i]);
        while(!p.empty()){
            long long k=p.top();
            if(n){
                p.pop();p.push(k-1);n--;
            }
            else{
                res+=k*k;
                p.pop();
            }
        }
        cout<<res<<endl;
    }
}