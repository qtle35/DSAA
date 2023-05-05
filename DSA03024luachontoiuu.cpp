#include <bits/stdc++.h>
using namespace std;
struct task{
    int start,finish;
} a[100005];
bool comp(task a, task b){
    return a.finish<b.finish;
}
main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        for(int i=0;i<n;i++){ 
            cin>>a[i].start>>a[i].finish;
        }
        sort(a,a+n,comp);
        int i=0,d=1;
        for(int j=1;j<n;j++){
            if(a[j].start>=a[i].finish){
                d++;i=j;
            }
        }
        cout<<d<<endl;
    }
}