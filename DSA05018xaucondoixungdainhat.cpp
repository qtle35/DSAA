#include <bits/stdc++.h>
using namespace std;
int f[1005][1005];
int tinh(string s){
    int kq=1,n=s.size();
    memset(f,0,sizeof(f));
    for(int i=0;i<n;i++) f[i][i]=1;
    for(int k=1;k<n;k++){
        for(int i=0;i<n-k;i++){
            int j=i+k;
            if(s[j]==s[i]&&k>1) f[i][j]=f[i+1][j-1];
            else if(s[j]==s[i]&&k==1) f[i][j]=1;
            else f[i][j]=0;
            if(f[i][j]>=1) kq=max(kq,j-i+1);
        }
    }
    return kq;
}
main(){
    int t;cin>>t;
    while(t--){
        string s;
        cin>>s;
        cout<<tinh(s)<<endl;
    }
}