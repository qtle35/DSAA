#include <bits/stdc++.h>
using namespace std;
void sinhth(int a[], int n, int k){
    int i;
    for(i = 1; i <= k; i++) a[i] = i;
    while(1) {
        for(i = 1; i <= k; i++) cout << a[i];
        cout << " ";
        i = k;
        while(i > 0 && a[i] >= n-k+i) i--;
        if(i == 0) return;
        a[i] += 1;
        for(int j = i+1; j <= k; j++)
            a[j] = a[i] + j - i;
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int a[k+1];
        sinhth(a, n, k);
        cout << endl;
    }
    return 0;
}
