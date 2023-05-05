#include <bits/stdc++.h>
using namespace std;
int a[100005];
vector<int> in;
vector<int> de;
main(){
    int n;cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(i%2==0) in.push_back(a[i]);
        else de.push_back(a[i]);
    }
    sort(in.begin(),in.end());
    sort(de.begin(),de.end(),greater<int>() );
    if(in.size()<de.size()){
        for(int i=0;i<in.size();i++) cout<<in[i]<<" "<<de[i]<<" ";
        cout<<de[de.size()-1];
    }
    else if(in.size()>de.size()){
        for(int i=0;i<de.size();i++) cout<<in[i]<<" "<<de[i]<<" ";
        cout<<in[in.size()-1];
    }
    else{
        for(int i=0;i<de.size();i++) cout<<in[i]<<" "<<de[i]<<" ";
    }
}