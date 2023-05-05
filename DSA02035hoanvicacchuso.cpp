#include<bits/stdc++.h>
using namespace std;
vector < string > v;
int a[100005], dd[100005] = {0}, n, k;
long long c = INT_MAX;
void ql(int i){
    for(int j = 1; j <= k; j++){
        if(dd[j] == 0){
            a[i] = j;
            dd[j] = 1;
            if(i == k){
                long long x1 = INT_MAX;
                long long x2 = INT_MIN;
                for(string x : v){
                    string s = "";
                    for(int h = 1; h <= k; h++) s += x[a[h] - 1];
                    x1 = min(x1, stoll(s));
                    x2 = max(x2, stoll(s));
                }
                c = min(c, abs(x1 - x2));
            }else ql(i + 1);
            dd[j] = 0;
        }
    }
}
 
int main(){
    cin >> n >> k;
    for(int i = 0; i < n ; i++){
        string s;
        cin >> s;
        v.push_back(s);
    }
    ql(1);
    cout << c;
}
