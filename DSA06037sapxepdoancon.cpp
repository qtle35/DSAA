#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define vt vector <int>
#define vtl vector <ll>
#define vts vector <string>
#define pi pair <int,int>
#define matrix vector <vt>
#define matrixl vector <vtl>
const int MOD = 1e9 + 7;

void solution() {
    // 2 1 3 5 4
    // 1 1 3 4 4 - tail
    // 2 2 3 5 5 - head
    int n;
    vt ans;
    cin >> n;
    vt v(n), tail(n), head(n);
    for (auto& i : v) cin >> i;
    tail.back() = v.back();
    for (int i = n - 2; i >= 0; i--) {
        tail[i] = min(v[i], tail[i + 1]);
    }
    head.front() = v.front();
    for (int i = 1; i < n; i++) {
        head[i] = max(head[i - 1], v[i]);
    }
    for (int i = 0; i < n - 1; i++) {
        if (head[i] <= tail[i + 1]) {
            ans.push_back(i + 1);
        }
    }
    cout << ans.size() << endl;
    for (auto i : ans) cout << i << " ";
}

int main() {
    faster();
    int T;
    cin >> T;
    while (T--) {
        solution();
        cout << endl;
    }
    return 0;
}