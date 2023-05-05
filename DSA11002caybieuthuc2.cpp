#include <bits/stdc++.h>
using namespace std;
int tinh(string s[], int idx){
    if(s[idx]=="+") return tinh(s,idx*2+1)+tinh(s,idx*2+2);
    else if(s[idx]=="-") return tinh(s,idx*2+1)-tinh(s,idx*2+2);
    else if(s[idx]=="*") return tinh(s,idx*2+1)*tinh(s,idx*2+2);
    else if(s[idx]=="/") return tinh(s,idx*2+1)/tinh(s,idx*2+2);
    return stoi(s[idx]);
}
main(){
    int t;cin>>t;
    while(t--){
        int n;
        string s[1005];
        cin>>n;
        for(int i=0;i<n;i++) cin>>s[i];
        cout<<tinh(s,0)<<endl;
    }
}