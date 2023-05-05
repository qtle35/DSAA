#include <bits/stdc++.h>
using namespace std;
int n,k,m=0;
char s[100];
string res[10000];
bool kt(){
    int dem=0,max1=0;
    for(int i=1;i<=n;i++){
        while(s[i]=='A'){
            dem++;
            i++;
        }
        max1=max(max1,dem);
        dem=0;
    }
    if(max1==k) return 1;
    return 0;
}
void quaylui(int i){
    for(char j='A';j<='B';j++){
        s[i]=j;
        if(i==n){
            if(kt()){
                for(int i=1;i<=n;i++) res[m].push_back(s[i]);
                m++;
            }
        }
        else quaylui(i+1);
    }
}
int main(){
    cin>>n>>k;
    quaylui(1);
    cout<<m<<endl;
    for(int i=0;i<m;i++) cout<<res[i]<<endl;
}