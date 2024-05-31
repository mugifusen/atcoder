#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n, q;
    string s;
    cin >> n >> q >> s;
    vector<int> a(n),b(n);
    for (int i = 0; i < n; ++i) {
        if (s[i] == s[i+1]) {
            a[i] = 1;
        }
    }
    // bはa先頭からの累積和
    for (int i = 1; i <= n-1; ++i) {
        b[i] += a[i-1]+b[i-1];
    }
    for (int i = 0; i < q; ++i) {
        int l, r;
        cin >> l >> r;
        cout << b[r-1] - b[l-1] << endl; 
    }
    return 0;
}