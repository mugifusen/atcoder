#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll func(ll r, ll m) {
    return r/m;
}

int main(void) {
    ll a, m, l, r;
    cin >> a >> m >> l >> r;
    l -= a;
    r -= a;
    
    if (l < 0) {
        ll x = -l/m+1;
        l += x*m;
        r += x*m;
    }
    cout << func(r, m) - func(l-1, m) << endl;
    return 0;
}