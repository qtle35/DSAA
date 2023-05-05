#include<bits/stdc++.h>
using namespace std;
int n;
int a[100005],l[100005],r[100005];
void createleft(){
    stack<int> st;
    a[0]=1e9;
    st.push(0);
    for(int i=1;i<=n;i++){
        while(!st.empty()&&a[st.top()]>=a[i]) st.pop();
        if(st.empty()) l[i]=0;
        else l[i]=st.top();
        st.push(i);
    }
}
void createright(){
    stack<int> st;
    a[n+1]=1e9;
    st.push(n+1);
    for(int i=n;i>=1;i--){
        while(!st.empty()&&a[st.top()]>=a[i]) st.pop();
        if(st.empty()) r[i]=n+1;
        else r[i]=st.top();
        st.push(i);
    }
}
main(){
    int t;cin>>t;
    while(t--){
        cin>>n;
        for(int i=1;i<=n;i++) cin>>a[i];
        long long res=0;
        createleft();
        createright();
        for(int i=1;i<=n;i++){
            long long area=a[i]*(long long)(r[i]-l[i]-1);
            res=max(res,area);
        }
        cout<<res<<endl;
    }
}