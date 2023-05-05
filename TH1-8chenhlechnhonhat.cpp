#include <bits/stdc++.h> 
using namespace std;
int a[10000005],b[10000005],n,k,c=INT_MAX;
vector <string> v;
void quaylui(int i){
    for(int j=1;j<=k;j++){
        if(!b[j]){
            a[i]=j;b[j]=1;
            if(i==k){
                int x1=INT_MAX;
                int x2=INT_MIN;
                for(string x:v){
                    string s="";
                    for(int h=1;h<=k;h++) s+=x[a[h]-1];
                    x1=min(x1,stoi(s));
                    x2=max(x2,stoi(s));
                }
                c=min(c,abs(x1-x2));
            }
            else quaylui(i+1);
            b[j]=0;
        }
    }
}
int main(){
    cin>>n>>k;
    string s;
    for(int i=0;i<n;i++){
        cin>>s;
        v.push_back(s);
    }
    quaylui(1);
    cout<<c;
}