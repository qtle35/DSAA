#include <bits/stdc++.h> 
using namespace std;
int kt(int s){
    int sum=1;
    for(int i=2;i<=sqrt(s);i++){
        if(s%i==0){
            sum+=i;
            int k=s/i;
            if(i!=k) sum+=k;
            if(sum>s) return 1;
        }
    }
    return 0;
}
main(){
    int a,b,dem=0;
    cin>>a>>b;
    for(int i=a;i<=b;i++){
        if(kt(i)) dem++;
    }
    cout<<dem<<endl;
}