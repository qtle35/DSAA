#include <bits/stdc++.h>
using namespace std;
int lon(string a, string b){
    for(int i=0;i<a.size();i++){
        if(a[i]=='5') a[i]='6';
    }
    for(int i=0;i<b.size();i++){
        if(b[i]=='5') b[i]='6';
    }
    return (stoi(a)+stoi(b));
}
int nho(string a, string b){
    for(int i=0;i<a.size();i++){
        if(a[i]=='6') a[i]='5';
    }
    for(int i=0;i<b.size();i++){
        if(b[i]=='6') b[i]='5';
    }
    return (stoi(a)+stoi(b));
}
main(){
    string a,b;
    cin>>a>>b;
    cout<<nho(a,b)<<" "<<lon(a,b);
}