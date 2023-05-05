#include <bits/stdc++.h>
using namespace std;
map<int, int> mp;

void createPolynomial(char s[]) {
    int h, m;
    char *p = strtok(s, "*x^+ ");
    while (p != NULL) {
        h = atoi(p); p = strtok(NULL, "*x^+ ");
        m = atoi(p); p = strtok(NULL, "*x^+ ");
        mp[m] += h;
    }
}

void print() {
    stack<pair<int, int>> st;
    for (int i = 0; i <= 10000; i++) 
        if (mp[i]) st.push({mp[i], i});
    while (!st.empty()) {
        cout << st.top().first << "*x^" << st.top().second;
        st.pop();
        if (!st.empty()) cout << " + ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        mp.clear();
        char s[10000];
        fgets(s, 10001, stdin);
        createPolynomial(s);
        fgets(s, 10001, stdin);
        createPolynomial(s);
        print();
    }
}