#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n, l, r;
    cin >> n >> l >> r;
    vector<int> a;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        a.push_back(x);
    }
    for (int i = 0; i < a.size(); ++i) {
        int ans;
        ans = min(max(a[i], l),r);
        cout << ans << ' ';
    //     int min;
    //     if (a[i] <= l) {
    //         min = l;
    //     } else if (l < a[i] && a[i] < r) {
    //         min = a[i];
    //     } else {
    //         min = r;
    //     }
    //     cout << min << ' ';
    }
    cout << endl;
    return 0;
}