#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
    int n;
    cin >> n;
    // 連想配列作るならmapの方が高速
    map<int, int> beans;
    for (int i = 0; i < n; ++i) {
        int a,c;
        cin >> a >> c;
        if (beans.count(c)) {
            beans[c] = min(beans[c], a);
        } else {
            beans[c] = a;
        }
    }
    int ans = 0;
    for (auto p : beans) ans = max(ans, p.second);
    cout << ans << endl;
    return 0;
}
