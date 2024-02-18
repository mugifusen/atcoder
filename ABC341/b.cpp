#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
    int n;
    cin >> n;
    // 掛け算で10^9超える場合があるのでllを利用
    vector<ll> a(n);
    vector<ll> s(n-1), t(n-1);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i < n-1; ++i) {
        cin >> s[i] >> t[i];
    }
    for (int i = 0; i < n-1; ++i) {
        a[i+1] += a[i]/s[i] * t[i]; // 纏めて国iの操作を行う
    }
    cout << a[n-1] << endl;
    return 0;
}