#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n, h_max;
    cin >> n;
    vector<int> h(n);
    for (int i = 0; i < n; ++i) {
        cin >> h[i];
    }
    h_max = h[0];
    bool flag = false;
    for (int i = 0; i < n; ++i) {
        if (h_max < h[i]) {
            flag = true;
            cout << i+1 << endl;
            break;
        } 
    }
    if (!flag) cout << -1 << endl;
    return 0;
}
