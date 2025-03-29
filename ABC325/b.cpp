#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    vector<int> w(n), x(n);
    for (int i = 0; i < n; ++i) {
        cin >> w[i] >> x[i];
    }
    long long max_m=0;
    for (int i = 0; i <= 24; ++i) {
        long long sum=0;
        for (int j = 0; j < n; ++j) {
            if (i + x[j] > 24) x[j] -= 24;
            if (i + x[j] >= 9 && i + x[j] < 18) {
                sum += w[j];
            }
        }
        max_m = max(sum, max_m);
    }
    cout << max_m << endl;
}
