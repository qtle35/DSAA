#include <bits/stdc++.h>
using namespace std;
int a[10]={1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
main(){
    int t;cin>>t;
    while(t--){
        int n,k=0;cin>>n;
        for(int i=9;i>=0;i--){
            if(n>=a[i]){
                k+=n/a[i];
                n=n%a[i];
            }
        }
        cout<<k<<endl;
    }
}