#include<bits/stdc++.h>
using namespace std;
int si(string s){
    int res=0;
    for(auto i:s){
        if(isdigit(i)) res=res*10+i-'0';
    }
    return res;
}
bool check(string s){
    for(auto i:s) if(i=='?') return 0;
    vector<int> v;
    string a,token;
    stringstream ss(s);
    while(ss>>token){
        if(token!="+"&&token!="-"&&token!="*"&&token!="/"&&token!="="){
            if(si(token)>=10) v.push_back(si(token));
            else return 0;
        }
        else if(token !="=") a=token;
    }
    if(a=="+"&&v[0]+v[1]==v[2]) return 1;
    if(a=="-"&&v[0]-v[1]==v[2]) return 1;
    if(a=="*"&&v[0]*v[1]==v[2]) return 1;
    if(a=="/"&&v[0]/v[1]==v[2]) return 1;
    return 0;
}
bool quaylui(int index,string s){
    if(check(s)){
        cout<<s;
        return 1;
    }
    for(int i=index;i<s.size();i++){
        if(s[i]=='?'){
            if(i>0&&i<s.size()-1&&s[i-1]==' '&&s[i+1]==' '){
                s[i]='+';
                if(quaylui(i+1,s)) return 1;
                s[i]='-';
                if(quaylui(i+1,s)) return 1;
                s[i]='*';
                if(quaylui(i+1,s)) return 1;
                s[i]='/';
                if(quaylui(i+1,s)) return 1;
            }
            else{
                for(char j='0';j<='9';j++){
                    s[i]=j;
                    if(quaylui(i+1,s)) return 1;
                }
            }
        }
    }
    return 0;
}
main(){
    int t;cin>>t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin,s);
        if(!quaylui(0,s)) cout<<"WRONG PROBLEM!";
        cout<<endl;
    }
}