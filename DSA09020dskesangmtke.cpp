#include <bits/stdc++.h>
using namespace std;
int a[1005][1005];
main(){
    int n;cin>>n;
    cin.ignore();
    for(int i=1;i<=n;i++){
        string s,token;
        getline(cin,s);
        stringstream ss(s);
        while(ss>>token){
            int j=stoi(token);
            a[i][j]=1;
        }
        
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++) cout<<a[i][j]<<" ";
        cout<<endl;
    }
}