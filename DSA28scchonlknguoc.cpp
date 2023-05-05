#include <bits/stdc++.h>
using namespace std;
main(){
    int n,dem=0,k=0,vtmin;cin>>n;
    int a[n],b[100][100];
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n-1;i++){
        vtmin=i;
        for(int j=i+1;j<n;j++){
            if(a[vtmin]>a[j]) vtmin=j;
        }
        swap(a[i],a[vtmin]);
        for(int j=0;j<n;j++){
            b[k][j]=a[j];
        }
        k++;dem++;
    }
    for(int i=k-1;i>=0;i--){
        cout<<"Buoc "<<dem--<<": ";
        for(int j=0;j<n;j++){
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
}