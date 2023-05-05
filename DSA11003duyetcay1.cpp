#include <bits/stdc++.h>
using namespace std;
int n;
int search(int a[], int x, int n){
    for(int i=0;i<n;i++) if(a[i]==x) return i;
    return -1;
}
void printpost(int in[], int pre[],int n){
    int x=search(in,pre[0],n);
    if(x!=0) printpost(in,pre+1,x);
    if(x!=n-1) printpost(in+x+1,pre+x+1,n-x-1);
    cout<<pre[0]<<" ";
}
main(){
    int t;cin>>t;
    while(t--){
        cin>>n;
        int in[n],pre[n];
        for(int i=0;i<n;i++) cin>>in[i];
        for(int i=0;i<n;i++) cin>>pre[i];
        printpost(in,pre,n);
        cout<<endl;
    }
}