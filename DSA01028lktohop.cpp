#include <bits/stdc++.h>
using namespace std;
int n,k, a[100],b[100],m;
vector<int> c;
void in(){
    for(int i=1;i<=k;i++) cout<<c[a[i]-1]<<" ";
    cout<<endl;
}
void quaylui(int i){
    for(int j=a[i-1]+1;j<=c.size()-k+i;j++){
        a[i]=j;
        if(i==k) in();
        else quaylui(i+1);
    }
}
main(){
    int check=1;
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        check=1;
        cin>>m;
        for(int i=0;i<c.size();i++){
            if(m==c[i]) check=0;
        }
        if(check) c.push_back(m);
    }
    sort(c.begin(),c.end());
    quaylui(1);
}