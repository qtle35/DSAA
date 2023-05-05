#include <bits/stdc++.h>
using namespace std;
int k; string s,maxx;
void quaylui(int h){
    if(h==0) return;
    int i,j,n=s.size();
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(s[j]>s[i]) {
                swap(s[i],s[j]);
                if(s>maxx) maxx=s;
                quaylui(h-1);
                swap(s[i],s[j]);
            }
            
        }
    }

}
main(){
    int t;cin>>t;
    while(t--){
        cin>>k>>s;
        maxx=s;
        quaylui(k);
        cout<<maxx<<endl;
    }
}
