#include <bits/stdc++.h>
using namespace std;
int n;
int a[100005], l[100005];
void createleft()
{
    stack<int> st;
    for (int i = 0; i < n; i++)
    {
        while (!st.empty() && a[st.top()] <= a[i])
            st.pop();
        if (st.empty())
            l[i] = i + 1;
        else
            l[i] = i - st.top();
        st.push(i);
    }
}
main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        createleft();
        for (int i = 0; i < n; i++)
            cout << l[i] << " ";
        cout << endl;
    }
}