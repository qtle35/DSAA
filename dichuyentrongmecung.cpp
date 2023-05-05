#include <bits/stdc++.h>
using namespace std;
int a[20][20],b[20][20],n,k=0,check=1;
char s[500];
vector <string> c;
int X[4]={1,0,0,-1};
int Y[4]={0,-1,1,0};
char M[4]={'D','L','R','U'};
void dichuyen(int x, int y,int k){
    b[x][y]=0;
    if(x==n-1&&y==n-1){
        string m="";
        for(int i=0;i<k;i++) m.push_back(s[i]);
        c.push_back(m);
        check=0;
        return;
    }
    for(int i=0;i<4;i++){
        if(a[x+X[i]][y+Y[i]] && (x+X[i])>=0&&(y+Y[i])>=0 && x+X[i]<=n-1 && y+Y[i]<=n-1 &&b[x+X[i]][y+Y[i]]){
            s[k]=M[i];
            dichuyen(x+X[i],y+Y[i],k+1);
            b[x+X[i]][y+Y[i]]=1;
        }
    }
}
main(){
    int t;cin>>t;
    while(t--){
        check=1;
        cin>>n;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++) {
                cin>>a[i][j];
                b[i][j]=1;
            }
        }
        if(!a[0][0]) cout<<-1;
        else{
            dichuyen(0,0,0);
            if(check) cout<<-1;
            else{
                cout<<c.size()<<" ";
                for(int i=0;i<c.size();i++) cout<<c[i]<<" ";
            }
        }
        cout<<endl;
        c.clear();
    }
}