#include <bits/stdc++.h>
using namespace std;

void solution() {
    int n;
    cin >> n;
    vector <int> v(n);
    for (auto& i : v) cin >> i;
    sort(v.begin(), v.end());
    if (n % 2) cout << v[n / 2];
    else cout << v[n / 2 - 1];
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solution();
        cout << endl;
    }
}