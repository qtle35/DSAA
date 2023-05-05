#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        while(1){
            if(n>=1){
                cout<<"[";
                for(int i=0;i<n;i++) {
                    if(i!=n-1) cout<<a[i]<<" ";
                    else cout<<a[i];
                }
                cout<<"]\n";
                for(int i=0;i<n-1;i++) a[i]=a[i]+a[i+1];
                n--;
            }
            else break;
        }
    }
}
