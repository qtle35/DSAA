#include <bits/stdc++.h>
using namespace std;
main(){
    int n,dem=1;cin>>n;
    int a[n],b[100][100];
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]) swap(a[i],a[j]);
        }
        cout<<"Buoc "<<i+1<<": ";
        for(int k=0;k<n;k++){
            cout<<a[k]<<" ";
        }
        cout<<endl;
    }
}