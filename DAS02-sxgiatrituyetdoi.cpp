#include <bits/stdc++.h>
using namespace std;
main(){
    int t;cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=1;i<n;i++){
            int m=abs(a[i]-x);
            int j=i-1;
            if(abs(a[j]-x)>m){
                int k=a[i];
                while((abs(a[j]-x)>m) && j>=0){
                    a[j+1]=a[j];
                    j--;
                }
                a[j+1]=k;
            }
        }
        for(int i=0;i<n;i++) cout<<a[i]<<" ";
        cout<<endl;
    }
}