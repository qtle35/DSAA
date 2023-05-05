#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int> > a;
int b[200]={0};
set<string> res;
string s;
void quaylui(int i,int k,int n){
    for(int j=b[i-1]+1;j<=n-k+i;j++){
        b[i]=j;
        if(i==k){
            int check[200]={0};
            for(int l=1;l<=k;l++){ 
                check[a[b[l]-1].first]=1;
                check[a[b[l]-1].second]=1;
            }
            cout<<endl;
            string temp="";
            for(int l=0;l<s.size();l++){
                if(check[l]==0) temp.push_back(s[l]);
            }
            res.insert(temp);
        }
        else quaylui(i+1,k,n);
    }
}
main(){
    cin>>s;
    stack<int> st;
    for(int i=0;i<s.size();i++){
        if(s[i]=='(') st.push(i);
        else if(s[i]==')'){
            a.push_back({st.top(),i});
            st.pop();
        }
    }
    for(int k=1;k<=a.size();k++) quaylui(1,k,a.size());
    for(auto i:res) cout<<i<<endl;
}