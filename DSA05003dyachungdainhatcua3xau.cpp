#include <bits/stdc++.h>
using namespace std;
int c[105][105][105],n,m,k;
int qhd(string s1, string s2, string s3){
    memset(c,0,sizeof(c));
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            for(int h=1;h<=k;h++){
                if(s1[i-1]==s2[j-1]&&s2[j-1]==s3[h-1]) c[i][j][h]=c[i-1][j-1][h-1]+1;
                else{
                    c[i][j][h]=max(c[i-1][j][h],max(c[i][j-1][h],c[i][j][h-1]));
                }
            }
        }
    }
    return c[n][m][k];
}
main(){
    int t;cin>>t;
    while(t--){
        string s1,s2,s3;
        cin>>n>>m>>k;
        cin>>s1>>s2>>s3;
        cout<<qhd(s1,s2,s3)<<endl;
    }
}