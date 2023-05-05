#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n, d;
    cin >> t;
    while(t--){
        cin >> n;
        int a[n+5];
        d = 0;
        for(int i = 0; i < n ; i++)        cin >> a[i];
        for(int i = 1; i < n ; i++){
            if(a[i] < a[i-1]){
                d = i;
                break;
            }
        }
        cout << d << endl;
    }

}