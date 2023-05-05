#include <bits/stdc++.h>
using namespace std;
void nhap(int a[],int n){
    for(int i=0;i<n;i++) cin>>a[i];
}
main(){
	int t;cin>>t;
	while(t--){
		int n,m,k;cin>>n>>m>>k;
        int a[n],b[m],c[k];
        vector<int> res;
        nhap(a,n);nhap(b,m);nhap(c,k);
        int i=0,j=0,l=0;
        while(i<n&&j<m&&l<k){
            if(a[i]==b[j]&&b[j]==c[l]) {
                res.push_back(a[i]);i++;j++;l++;
            }
            else if(a[i]<b[j]) i++;
            else if(b[j]<c[l]) j++;
            else l++;
        }
        if(res.empty()) cout<<"NO";
        else{
            for(int i=0;i<res.size();i++) cout<<res[i]<<" ";
        }
        cout<<endl;
	}
}
