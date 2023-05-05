#include <bits/stdc++.h>
using namespace std;
int n,k,a[1000],b[1000],c[1000],dem=0;;
bool kt(){
    for(int i=1;i<k;i++) if(c[a[i]]>c[a[i+1]]) return 0;
    return 1;
}
void quaylui(int i){
    for(int j=a[i-1]+1;j<=n-k+i;j++){
        a[i]=j;
        if(i==k){
            if(kt()) dem++;
        }
        else quaylui(i+1);
    }
}
main(){
    cin>>n>>k;
    for(int i=1;i<=n;i++) cin>>c[i];
    quaylui(1);
    cout<<dem;
}