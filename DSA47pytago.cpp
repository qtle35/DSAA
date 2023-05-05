#include <bits/stdc++.h>
using namespace std;
bool solution(long long a[],long long n){
    for(int i=n-1;i>=2;i--){
        int l=0,r=i-1;
        while(l<r){
            if(a[l]+a[r]==a[i]) return 1;
            else if(a[l]+a[r]<a[i]) l++;
            else r--;
        }
    }
    return 0;
}
main(){
    int t;cin>>t;
    while(t--){
        long long n;cin>>n;
        long long a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            a[i]*=a[i];
        }
        if(solution(a,n)) cout<<"YES\n";
        else cout<<"NO\n";
    }
}