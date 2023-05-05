#include <bits/stdc++.h>
using namespace std;
bool comp(int a,int b){
    return a>b;
}
void sx(int n, int a[]){
    sort(a,a+n,comp);
    int b[n],k=0;
    for(int i=0,j=n-1;i<=n/2||j>n/2;i++,j--){
        b[k++]=a[i];b[k++]=a[j];
    }
    for(int i=0;i<n;i++){
        cout<<b[i]<<" ";
    }
    cout<<endl;
}
main(){
    int t;cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        sx(n,a);
    }
    
}