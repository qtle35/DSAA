#include <bits/stdc++.h>
using namespace std;
int k,m,n,check[3][3];
char a[3][3];
string dic[105],str;
vector<string> res;
bool isword(string str){
    for(int i=0;i<k;i++){
        if(str==dic[i]) return 1;
    }
    return 0;
}
void quaylui(int i, int j, string str){
    check[i][j]=1;
    str=str+a[i][j];
    if(isword(str)) res.push_back(str);
    for(int row=i-1;row<m&&row<=i+1;row++){
        for(int col=j-1;col<n&&col<=j+1;col++){
            if(check[row][col]==0&&col>=0&&row>=0) quaylui(row,col,str);
        }
    }
    str.erase(str.size()-1);
    check[i][j]=0;
}
void solution(){
    res.clear(),str.clear();
    cin>>k>>m>>n;
    for(int i=0;i<k;i++) cin>>dic[i];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++) cin>>a[i][j];
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            quaylui(i,j,str);
        }
    }
    if(res.size()==0) cout<<-1<<endl;
    else{
        for(int i=0;i<res.size();i++) cout<<res[i]<<' ';
        cout<<endl;
    }
}
main(){
    int t;cin>>t;
    while(t--){
        solution();
    }
}