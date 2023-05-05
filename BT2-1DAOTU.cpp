#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string s, token;
        getline(cin, s);
        stringstream ss(s);
        while (ss >> token) {
            for (int i = token.size() - 1; i >= 0; i--) cout << token[i];
            cout << " ";
        }
        cout << endl;
    }
}