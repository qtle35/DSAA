#include <bits/stdc++.h>
using namespace std;
bool comp(int a, int b){
    return abs(a)<abs(b);
}
main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int a[n],b[100000]={0};
        for(int i=0;i<n;i++){
            cin>>a[i];
            b[a[i]]++;
        }
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(b[a[i]]<b[a[j]]) swap(a[i],a[j]);
                else if(b[a[i]]==b[a[j]]){
                    if(a[i]>a[j]) swap(a[i],a[j]);
                }
            }
        }
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}