#include <bits/stdc++.h>
using namespace std;
int a[1005][1005];
main(){
    int n;cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++) cin>>a[i][j];
    }
    for(int i=1;i<=n;i++){
        string s="";
        for(int j=1;j<=n;j++){
            if(a[i][j]) s+=to_string(j)+" ";
        }
        cout<<s<<endl;
    }
}