#include<bits/stdc++.h>
using namespace std;
int a[105][105];
main(){
    int t;cin>>t;
    while(t--){
        string s1,s2;
        cin>>s1>>s2;
        int m=s1.size(),n=s2.size();
        s1=' '+s1;s2=' '+s2;
        for(int i=1;i<=n;i++) a[0][i]=i;
        for(int i=1;i<=m;i++) a[i][0]=i;
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                if(s1[i]==s2[j]) a[i][j]=a[i-1][j-1];
                else a[i][j]=min(a[i-1][j],min(a[i][j-1],a[i-1][j-1]))+1;
            }
        }
        cout<<a[m][n]<<endl;
    }
}