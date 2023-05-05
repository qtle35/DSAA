#include <bits/stdc++.h>
using namespace std;
main(){
    int n,m=1e9,res=1e9; cin>>n;
    int a[1005];
    for(int i=0;i<n;i++){
        cin>>a[i];
        m=min(a[i],m);
    }
    m--;
    while(m>0){
        int tmp=0,kt=1;
        for(int i=0;i<n;i++){
            int x=a[i]/(m+1)+1;
            if(m==a[i]/x) tmp+=x;
            else{
                kt=0;
                break;
            }
        }
        if(kt)  res=min(res,tmp);
        m--;
    }
    cout<<res<<endl;
}