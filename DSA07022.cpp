#include <bits/stdc++.h>
using namespace std;
int a[1000005],b[1000005],c[1000005];
int find(int n,int k){
    for(int i=0;i<n;i++){

    }
}
main(){
    int t;cin>>t;
    while(t--){
        memset(b,0,sizeof(b));
        int n;cin>>n;
        for(int i=0;i<n;i++){
            cin>>a[i];
            b[a[i]]++;
        }
        stack<int> st;
        for(int i=n-1;i>=0;i--){
            while(!st.empty()&&b[a[i]]>=b[st.top()]) st.pop();
            if(st.empty()) c[i]=-1;
            else c[i]=st.top();
            st.push(a[i]);
        }
        for(int i=0;i<n;i++) cout<<c[i]<<" ";
        cout<<endl;
    }
}