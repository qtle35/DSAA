#include <bits/stdc++.h>
using namespace std;
main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int a[n],l=0,r=0;
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++){
            if(a[i]>a[i+1]){
                l=i;
                break;
            }
        }
        for(int i=n-1;i>=0;i--){
            if(a[i]<a[i-1]){
                r=i;
                break;
            }
        }
        int max=a[l],min=a[l];
        for(int i=l+1;i<=r;i++){
            if(a[i]>max) max=a[i];
            if(a[i]<min) min=a[i];
        }
        for(int i=0;i<l;i++){
            if(a[i]>min){
                l=i;
                break;
            }
        }
        for(int i=n-1;i>=r+1;i--){
            if(a[i]<max){
                r=i;
                break;
            }
        }
        cout<<l+1<<" "<<r+1<<endl;
    }
}