#include<bits/stdc++.h> 
using namespace std; 
int main() { 
	int t;cin>>t;
	while(t--){
		long long n,kt=1,res=0,sum=0;
		cin>>n;
		long long a[n],b[n]={0};
		for(int i=0;i<n;i++){
			cin>>a[i];
			if(a[i]>0) kt=0;
		}
		for(int i=0;i<n;i++){
			sum=max(a[i],sum+a[i]);
			res=max(sum,res);
		}
		if(!kt) cout<<res<<endl;
		else cout<<"-1\n";
	}
}
