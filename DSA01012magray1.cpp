#include<bits/stdc++.h> 
using namespace std;
main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int k=pow(2,n);
        string s[k+5];
        s[1]="0";s[2]="1";
        if(n>1){
            int m=2;
            for(int i=2;i<=n;i++){
                int l=pow(2,i);
                for(int j=1;j<=m;j++){
                    s[l-j+1]= "1"+s[j];
                    s[j]="0"+s[j];
                }
                m=l;
            }
        }
        for(int i=1;i<=k;i++) cout<<s[i]<<" ";
        cout<<endl;
    }
}