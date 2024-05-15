#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n, max=0, max_idx;
    cin >> n;
    vector<int> a(n),b(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i] >> b[i];
        if (max < b[i]-a[i]) {
            max = b[i]-a[i];
            max_idx = i;
        }
    }
    long long sum=0;
    for (int i = 0; i < n; ++i) {
        if (i == max_idx) {
            sum += b[i];
        } else {
            sum += a[i];
        }
    }
    cout << sum << endl;
    return 0;
}
