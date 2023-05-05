#include <bits/stdc++.h>
using namespace std;
int n,c[50][50],b[100],a[100],fopt=1e9,cmin=1e9,cost=0;
void quaylui(int i){
    for(int j=1;j<=n;j++){
        if(!b[j]){
            a[i]=j;b[j]=1;
            cost+=c[a[i-1]][a[i]];
            if(i==n){
                fopt=min(fopt,cost);
            }
            else if(cost+cmin*(n-i+1)<fopt) quaylui(i+1);
            cost-=c[a[i-1]][a[i]];
            b[j]=0;
        }
    }
}
int dem(string a, string b){
    int i=0,j=0,d=0;
    while(i<a.size()&&j<b.size()){
        if(a[i]==b[j]){i++;j++;d++;}
        else if(a[i]>b[j]) j++;
        else i++;
    }
    return d;
}
main(){
    cin>>n;
    string tmp;
    vector<string> s;
    for(int i=0;i<n;i++){
        cin>>tmp;
        s.push_back(tmp);
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==j) c[i][j]=1e9;
            else c[i][j]=dem(s[i-1],s[j-1]);
            cmin=min(cmin,c[i][j]);
        }
    }
    quaylui(1);
    cout<<fopt;
}