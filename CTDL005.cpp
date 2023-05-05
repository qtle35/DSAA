#include <bits/stdc++.h>
using namespace std;
main(){
    int n;cin>>n;
    int a[n],b[n]={0};
    for(int i=0;i<n;i++){ 
        cin>>a[i];
    }
    int k;cin>>k;
    for(int i=0;i<n;i++){
        if(!b[i]) cout<<a[i]<<" ";
        b[i]=1;
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j]) b[j]=1;
        }
    }
}