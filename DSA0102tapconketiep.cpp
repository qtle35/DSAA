#include <bits/stdc++.h>
using namespace std;
void combinationGen( int B[] , int N, int K ){
    int i = K;
    while (i>0&&B[i] >= N - K + i) i--;
    if(i==0){
        for(int j=1;j<=K;j++) B[j]=j;
    }
    else{
        B[i]++;
        for(int j = i + 1; j <= N; j++) B[j] = B[i] + j - i; 
    }
    
}
main(){;
    int t;cin>>t;
    while(t--){
        int n,k;cin>>n>>k;
        int a[10000];
        for(int i=1;i<=k;i++) cin>>a[i];
        combinationGen(a,n,k);
        for(int i=1;i<=k;i++) cout<<a[i]<<" ";
        cout<<endl;
    }
}