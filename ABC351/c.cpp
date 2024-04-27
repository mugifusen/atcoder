#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
    int n;
    cin >> n;
    vector<ll> a(n), col;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i < n; ++i) {
        col.push_back(a[i]);
        int size = col.size();
        while (size >= 2) {
            if (col[size - 1] != col[size - 2]) {
                break;
            }
            ll last = col.back();
            col.pop_back();
            col.pop_back();
            col.push_back(last+1);
            size = col.size();
        }
    }

    cout << col.size() << endl;
    return 0;
}
