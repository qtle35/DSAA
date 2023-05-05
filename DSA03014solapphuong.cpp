#include<bits/stdc++.h>
using namespace std;
bool isok(string s2, string s1){
    int index=0;
    for(int i=0;i<s1.size();++i){
        if(s2[index]==s1[i]) index++;
    }
    if(index==s2.size()) return 1;
    return 0;
}
main(){
    int t;cin>>t;
    while(t--){
        long long x,ok=1;cin>>x;
        long long y=cbrt(x);
        string s1=to_string(x);
        for(int i=y;i>=1;i--){
            long long z=pow(i,3);
            string s2=to_string(z);
            if(isok(s2,s1)){
                cout<<s2<<endl;
                ok=0;
                break;
            }
        }
        if(ok) cout<<-1<<endl;
    }
}