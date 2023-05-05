#include<bits/stdc++.h>
using namespace std;
void solution(long long tu, long long mau){
    long long kq=0;
    while(1){
        if(mau%tu==0){
            cout<<"1/"<<mau/tu<<endl;
            break;
        }
        else{
            kq=mau/tu+1;
            cout<<"1/"<<kq<<" + ";
            tu=tu*kq-mau;
            mau*=kq;
        }
    }
}
main(){
    int t;cin>>t;
    while(t--){
        long long tu,mau;
        cin>>tu>>mau;
        solution(tu,mau);
    }
}