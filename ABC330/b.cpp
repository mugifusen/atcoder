#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
    ll n, l, r;
    cin >> n >> l >> r;
    vector<ll> a(n), X(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        for (int x = l; x <= r; x++) {
            bool flag = true;
            for (int y = l; y <= r; y++) {
                if (abs(x-a[i]) > abs(y-a[i])) flag = false;
            }
            if (flag) {
                X[i] = x;
                break;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << X[i] << ' ';
    }
    cout << endl;
    return 0;
}