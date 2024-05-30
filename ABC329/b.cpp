#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    int max_n = *max_element(begin(a), end(a));
    int max_s = 0;
    for (int i = 0; i < n; ++i) {
        if (max_n > a[i]) {
            max_s = max(max_s, a[i]);
        }
    }
    cout << max_s << endl;
    return 0;
}
