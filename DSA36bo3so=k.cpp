#include <bits/stdc++.h>
using namespace std;
main(){
	int t;cin>>t;
	while(t--){
		int n,K,check=1;
		cin>>n>>K;
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		sort(a,a+n);
		for(int i=0;i<n-3;i++){
			int j=i+1;
			int k=n-1;
			while(j!=k){
				if(a[i]+a[j]+a[k]==K){
					check=0;
					j++;
                    break;
				}
				else if(a[i]+a[j]+a[k]<K) j++;
				else{
					k--;
				}
                if(!check) break;
			}
			
		}
		if(check) cout<<"NO\n";
        else cout<<"YES\n";
	}
}
