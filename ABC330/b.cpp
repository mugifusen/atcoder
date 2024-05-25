#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n, l, r;
    cin >> n >> l >> r;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    int max_x;
    for (int i = 0; i < n; ++i) {
        max_x = max(abs(r-a[i]), abs(l-a[i]));
        cout << max_x << ' ';
    }
    cout << endl;
    return 0;
}