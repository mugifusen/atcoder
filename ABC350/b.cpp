#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n, q;
    cin >> n >> q;
    vector<int> t(q), teeth(n, 1);
    for (int i = 0; i < q; ++i) {
        cin >> t[i];
    }
    for (int i = 0; i < q; ++i) {
        if (teeth[t[i]-1]) {
            teeth[t[i]-1] = 0;
        } else {
            teeth[t[i]-1] = 1;
        }
    }
    int count = 0;
    for (auto& i : teeth) {
        if (i) count++;
    }
    cout << count << endl;
    return 0;
}