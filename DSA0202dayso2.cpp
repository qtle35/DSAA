#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n,k=0;cin>>n;
        int a[n];
        string s[1000];
        for(int i=0;i<n;i++) cin>>a[i];
        while(1){
            if(n>=1){
                s[k]+="[";
                for(int i=0;i<n;i++) {
                    if(i!=n-1) s[k]+=to_string(a[i])+" ";
                    else s[k]+=to_string(a[i]);
                }
                s[k]+="]";
                for(int i=0;i<n-1;i++) a[i]=a[i]+a[i+1];
                n--;
                k++;
            }
            else break;
            
        }
        for(int i=k-1;i>=0;i--) cout<<s[i]<<" ";
        cout<<endl;
    }
}
