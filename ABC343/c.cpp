#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool judge_palindrome(ll n) {
    string s = to_string(n);
    int len = s.length();
    for (int i = 0; i < len / 2; ++i) {
        if (s[i] != s[len - 1 - i]) {
            return false;
        }
    }
    return true;
}

int main() {
    ll n;
    cin >> n;
    ll x = 1, max = 0;
    while (1) {
        ll k = pow(x, 3);
        if (k > n) {
            break;
        }
        if (judge_palindrome(k)) {
            max = k;
        }
        x++;
    }
    cout << max << endl;
    return 0;
}