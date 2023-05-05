#include <bits/stdc++.h>
using namespace std;
main(){
    int t;cin>>t;
    while(t--){
        int m;
        string s;
        cin>>s;
        int a['z'+1]={};
        for(int i=0;i<s.size();i++) a[s[i]]++;
        m=*max_element(a+'a',a+'z');
        if(m>s.size()-m+1) cout<<-1<<endl;
        else cout<<1<<endl;
    }
}