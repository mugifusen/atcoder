#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, t;
    cin >> n >> t;
    vector<int> a(t);
    for (int i = 0; i < t; ++i) {
        cin >> a[i];
    }
    vector<int> row_n(n, 0), col_n(n, 0);
    set<int> st;
    int diag1_n = 0, diag2_n = 0;

    for (int turn = 0; turn < t; ++turn) {
        int num, i, j;
        num = a[turn];
        i = (num - 1) / n;
        j = (num - 1) % n;

        st.insert(num);
        if (++row_n[i] == n || ++col_n[j] == n) {
            cout << turn + 1 << endl;
            return 0;
        }
        if (i == j && ++diag1_n == n) {
            cout << turn + 1 << endl;
            return 0;
        }
        if (i+j == n-1 && ++diag2_n == n) {
            cout << turn + 1 << endl;
            return 0;
        }
    }

    cout << -1 << endl;
    return 0;
}
