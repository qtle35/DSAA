#include <bits/stdc++.h>
using namespace std;
int a[20][20],n,m,k=0,dem=0;
string s[20];
void dichuyen(int x, int y){
    if(x==n-1&&y==m-1){
        dem++;
    }
    if(x+1<=n-1) {
        dichuyen(x+1,y);
    }
    if(y+1<=m-1){
        dichuyen(x,y+1);
    }
}
main(){
    int t;cin>>t;
    while(t--){
        dem=0;
        cin>>n>>m;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++) cin>>a[i][j];
        }
        dichuyen(0,0);
        cout<<dem;
        cout<<endl;
    }
}