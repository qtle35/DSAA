#include <bits/stdc++.h>
using namespace std;
main(){
    int n,dem=0;cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    cout<<"Buoc "<<dem++<<": "<<a[0]<<endl;
    for(int i=1;i<n;i++){
        int m=a[i];
        int j=i-1;
        while(j>=0&&a[j]>m){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=m;
        cout<<"Buoc "<<dem++<<": ";
        for(int k=0;k<i+1;k++){
            cout<<a[k]<<" ";
        }
        cout<<endl;
    }
}