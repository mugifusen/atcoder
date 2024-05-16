#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n,k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    int i = 0, k_tmp = k, count = 1;
    while(i < n) {
        k_tmp -= a[i];
        if (k_tmp < 0) {
            k_tmp = k;
            count++;
            continue;
        }
        i++;
    }
    cout << count << endl;
    return 0;
}
