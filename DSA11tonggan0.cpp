#include <bits/stdc++.h>
using namespace std;
bool comp(int a, int b){
    return abs(a)<abs(b);
}
main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        long long a[n],minsum=INT_MAX,sum;
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                sum=a[i]+a[j];
                if(abs(sum)<abs(minsum)) minsum=sum;
            }
        }
        cout<<minsum<<endl;
    }
}