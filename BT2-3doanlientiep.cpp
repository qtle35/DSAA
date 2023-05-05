#include<bits/stdc++.h>
using namespace std;
main(){
    int t;cin>>t;
    while(t--){
        int a[100000],b[100000],n;
        cin>>n;
        for(int i=0;i<n;i++) cin>>a[i];
        stack<int> st;
        for(int i=0;i<n;i++){
            while(!st.empty()&&a[i]>=a[st.top()]) st.pop();
            if(st.empty()) b[i]=i+1;
            else b[i]=i-st.top();
            st.push(i);
        }
        for(int i=0;i<n;i++) cout<<b[i]<<" ";
        cout<<endl;
    }
}