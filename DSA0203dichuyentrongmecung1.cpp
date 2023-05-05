#include <bits/stdc++.h>
using namespace std;
int a[20][20],n,k=0,check=1;
string s[20];
void dichuyen(int x, int y,int k){
    if(x==n-1&&y==n-1){
        for(int i=0;i<k;i++){
            cout<<s[i];
        }
        cout<<" ";
        check=0;
    }
    if(a[x+1][y]&&x+1<=n-1&&a[0][0]==1) {
        s[k]="D";
        dichuyen(x+1,y,k+1);
    }
    if(a[x][y+1]&&y+1<=n-1&&a[0][0]==1){
        s[k]="R";
        dichuyen(x,y+1,k+1);
    }
}
main(){
    int t;cin>>t;
    while(t--){
        check=1;
        cin>>n;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++) cin>>a[i][j];
        }
        dichuyen(0,0,0);
        if(check) cout<<"-1";
        cout<<endl;
    }
}