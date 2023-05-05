#include <bits/stdc++.h>
using namespace std;
main(){
    int t;cin>>t;
    while(t--){
        int n,x,dem=0;cin>>n>>x;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        for(int i=0;i<n-2;i++){
			int j=i+1;
			int k=n-1;
			while(j<k){
				if(a[i]+a[j]+a[k]<x){
					dem+=k-j;
					j++;
				}
				else{
					k--;
				}
			}
			
		}
		cout<<dem<<endl;
    }
}