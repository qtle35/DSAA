#include<bits/stdc++.h>
using namespace std;
main(){
    int t;cin>>t;
    while(t--){
        string s;cin>>s;
        int n=s.size();
        int dp[50][50]={0};//số cách chèn tối thiểu của 1 chuỗi từ ký tự i đến j
        for(int i=0;i<n;i++){
            for(int j=0,k=i;k<n;k++,j++){
                if(s[j]==s[k]) dp[j][k]=dp[j+1][k-1];
                else dp[j][k]=min(dp[j+1][k],dp[j][k-1])+1;
            }
        }
        cout<<dp[0][n-1]<<endl;
    }
}