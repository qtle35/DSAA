#include <bits/stdc++.h>
using namespace std;
void sinhth(string s, int n, int k){
    int i;
    s[1]='A';
    for(i = 2; i <= k; i++) s[i]=(char)('A'+i-1);
    while(1) {
        for(i = 1; i <= k; i++) cout << s[i];
        cout <<endl;
        i = k;
        while(i > 0 && s[i] >=(char)('A'+n-k+i-1)) i--;
        if(i == 0) return;
        s[i]=char(s[i]+1);
        for(int j = i+1; j <= k; j++)
            s[j] =(char)(s[i] + j - i);
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        string s;
        sinhth(s, n, k);
    }
    return 0;
}
