#include <bits/stdc++.h>
using namespace std;
main(){
    int n,vtmin;cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n-1;i++){
        vtmin=i;
        for(int j=i+1;j<n;j++){
            if(a[vtmin]>a[j]) vtmin=j;
        }
        swap(a[i],a[vtmin]);
        cout<<"Buoc "<<i+1<<": ";
        for(int k=0;k<n;k++){
            cout<<a[k]<<" ";
        }
        cout<<endl;
    }
}