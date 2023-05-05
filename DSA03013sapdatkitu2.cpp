#include <bits/stdc++.h>
using namespace std;
main(){
    int t;cin>>t;
    while(t--){
        int n,f[26]={0};
        string s;
        cin>>n>>s;
        for(int i=0;i<s.size();i++) f[s[i]-'A']++;
        sort(f,f+26,greater<int>());
        if((f[0]-1)*n+1<=s.size()) cout<<1<<endl;
        else cout<<-1<<endl;
    }
}