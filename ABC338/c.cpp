#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main(void) {
    int n;
    cin >> n;
    vector<int> q(n), a(n), b(n);
    rep(i,n) cin >> q[i];
    rep(i,n) cin >> a[i];
    rep(i,n) cin >> b[i];
    int ans = 0;
    bool flag = true;
    for (int x = 0;; ++x) {
        vector<int> r(n);
        rep(i,n) {
            r[i] = q[i] - a[i]*x;
            if (r[i] < 0) {
                flag = false;
                break;
            }
        }
        if (!flag) break;
        int y = 10000000;
        rep(i,n) {
            if (b[i] == 0) continue;
            y = min(r[i]/b[i], y);
        }
        ans = max(x+y, ans);
    }
    cout << ans << endl;
    return 0;
}