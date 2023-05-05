#include <bits/stdc++.h>
using namespace std;
main(){
    int n,dem=0,k=1;cin>>n;
    int a[n],b[100][100];
    for(int i=0;i<n;i++) cin>>a[i];
    b[0][0]=a[0];
    for(int i=1;i<n;i++){
        int m=a[i];
        int j=i-1;
        while(j>=0&&a[j]>m){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=m;
        for(int j=0;j<i+1;j++){
            b[k][j]=a[j];
        }
        k++;dem++;
    }
    for(int i=k-1;i>=0;i--){
        cout<<"Buoc "<<dem--<<": ";
        for(int j=0;j<n;j++){
            cout<<b[i][j]<<" ";
        }
        n--;
        cout<<endl;
    }
}