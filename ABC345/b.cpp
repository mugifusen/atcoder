#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
    ll x;
    cin >> x;
    ll y;
    if (x % 10 != 0) {
        if (x > 0) {
            y = x/10+1;
        } else {
            y = x/10;
        }
        cout << y << endl;
        return 0;
    }
    cout << x/10 << endl;
    return 0;
}
