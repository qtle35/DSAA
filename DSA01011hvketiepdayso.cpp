#include <bits/stdc++.h>
using namespace std;
int check=1;
string s;
void hvkt(){
    int j=s.size()-2;
    while(j>=0&&s[j]>=s[j+1]) j--;
    if(j>=0){
        int k=s.size()-1;
        while(s[j]>=s[k]) k--;
        swap(s[j],s[k]);
        int r=j+1,m=s.size()-1;
        while(r<=m){
            swap(s[r],s[m]);
            r++,m--;
        }
    }
    else check=0;
}
main(){
    int t;cin>>t;
    while(t--){
        check=1;
        int k;
        cin>>k>>s;
        hvkt();
        if(check) cout<<k<<" "<<s;
        else cout<<k<<" "<<"BIGGEST";
        cout<<endl;
    }
}