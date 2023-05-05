#include<bits/stdc++.h>
using namespace std;
int ok=1,X[100],k=1,n,m=0;
string s[1000];
void in(int k){
    s[m]="";
    s[m]+="(";
    for(int i=1;i<k;i++) s[m]+=to_string(X[i])+" ";
    s[m]+=to_string(X[k])+") ";
    m++;
}
void phantich(){
    int i = k, j, R, S,D;
    while (i > 0 && X[i]==1 ) i--;
    if (i>0 ) {
        X[i] = X[i]-1; D =k-i+1;
        R=D/X[i]; S=D%X[i]; 
        k= i;
        if (R>0) {
            for ( j = i +1; j<=i + R; j++) 
                    X[j] = X[i];
            k = k + R;
        }
        if (S>0 ){ 
            k = k +1; X[k] = S; 
        }
    }
    else ok=0;
}
main(){
    int t;cin>>t;
    while(t--){
        k=1;m=0;
        cin>>n;
        X[1]=n;
        ok=1;
        while(ok){
            in(k);
            phantich();
        }
        cout<<m<<endl;
        for(int i=0;i<m;i++) cout<<s[i];
        cout<<endl;
    }
}
