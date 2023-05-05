#include<bits/stdc++.h>
using namespace std;
main(){
    int t;cin>>t;
    while(t--){
        int s,t;cin>>s>>t;
        int a[20005],i;
        for(int i=0;i<=20000;i++) a[i]=INT_MAX;
        queue<int> q;
        a[s]=0;
        q.push(s);
        while(a[t]==INT_MAX){
            i=q.front();q.pop();
            if(i-1>0&&a[i-1]==INT_MAX){
                a[i-1]=a[i]+1;
                q.push(i-1);
            }
            if(2*i<20000&&a[2*i]==INT_MAX){
                a[2*i]=a[i]+1;
                q.push(2*i);
            }
        }
        cout<<a[t]<<endl;
    }
}