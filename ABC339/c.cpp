#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    ll m = 0, sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += a[i];
        m = min(m, sum); // mは負の値
    }
    cout << sum-m << endl;
    return 0;
}