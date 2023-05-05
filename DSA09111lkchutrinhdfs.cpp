#include <bits/stdc++.h>
using namespace std;
#define vt vector <int>
#define matrix vector <vt>

int n, e;
matrix M;
vt mark, ans;

void dfs(int x, int st, vt path) {
    if (!ans.empty()) return;
    mark[x] = 0;
    for (auto i : M[x]) {
        vt tmp = path;
        tmp.push_back(i);
        if (i == st && path.size() > 2) {
            if (ans.empty()) ans = tmp;
            return;
        }
        if (mark[i]) {
            dfs(i, st, tmp);
        }
    }
}

void solution() {
    ans.clear();
    cin >> n >> e;
    M = matrix(n + 1);
    for (int i = 0, a, b; i < e; i++) {
        cin >> a >> b;
        M[a].push_back(b);
        M[b].push_back(a);
    }
    for (int i = 1; i <= n; i++) sort(M[i].begin(), M[i].end());
    mark = vt(n + 1, 1);
    dfs(1, 1, vt(1, 1));
    if (ans.empty()) cout << "NO";
    else for (auto i : ans) cout << i << " ";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solution();
        cout << endl;
    }
}