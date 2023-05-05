#include<bits/stdc++.h>
using namespace std;
int n;
long long a[1005];
void qhd(){
    a[0]=1;
    int x=2,y=3,z=5,i2=0,i3=0,i5=0;
    for(int i=1;i<1001;i++){
        a[i]=min(x,min(y,z));
        if(a[i]==x) {i2++;x=a[i2]*2;}
        if(a[i]==y) {i3++;y=a[i3]*3;}
        if(a[i]==z) {i5++;z=a[i5]*5;}
    }
}
main(){
    int t;cin>>t;
    qhd();
    while(t--){
        cin>>n;
        cout<<a[n-1]<<endl;
    }
}