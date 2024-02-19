#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n, first;
    cin >> n;
    vector<int> a(n),b(n,n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    for (int i = 0; i < n; ++i) {
        if (a[i] < 0) {
            first = i+1;
        } else {
            b[a[i]] = i; // 理解だめです。ご飯後
        }
    }
}
