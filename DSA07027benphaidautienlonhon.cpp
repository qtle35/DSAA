#include <bits/stdc++.h>
using namespace std;
main(){
    int t;cin>>t;
    while(t--){
        int a[100000],b[100000],n;
        cin>>n;
        stack<int> st;
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=n-1;i>=0;i--){
            while(!st.empty()&&a[i]>=st.top()) st.pop();
            if(st.empty()) b[i]=-1;
            else b[i]=st.top();
            st.push(a[i]);
        }
        for(int i=0;i<n;i++) cout<<b[i]<<" ";
        cout<<endl;
    }
}