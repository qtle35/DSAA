#include <bits/stdc++.h>
using namespace std;
main(){
    int n,u,v;cin>>n;
    cin.ignore();
    vector<int> List[1005];
    for(int i=1;i<=n;i++){
        string s,token;
        getline(cin,s);
        stringstream ss(s);
        while(ss>>token){
            //cout<<token<<endl;
            List[i].push_back(stoi(token));
        }
        for(auto j:List[i]){
            if(j>i) cout<<i<<" "<<j<<endl;
        }
    }
}