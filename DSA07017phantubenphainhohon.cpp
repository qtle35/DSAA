#include <bits/stdc++.h>
using namespace std;
int a[1000005];
main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        deque<int> deq;
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++){
            int check=0;
            for(int j=i;j<n;j++){
                if(a[i]<a[j]){
                    for(int k=j;k<n;k++){
                        if(a[j]>a[k]){
                            check=1;
                            deq.push_back(a[k]);
                            break;
                        }
                    }
                break;
                }
            }
            if(!check) deq.push_back(-1);
        }
        while(n--){
            cout<<deq.front()<<" ";
            deq.pop_front();
        }
        cout<<endl;
    }
}