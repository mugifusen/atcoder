#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n,m;
    cin >> n >> m;
    vector<int> h(n);
    for (int i = 0; i < n; ++i) {
        cin >> h[i];
    }
    int ans=n;
    for (int i = 0; i < n; ++i) {
        m -= h[i];
        if (m == 0) {
            ans = i+1;
            break;
        } else if (m < 0) {
            ans = i;
            break;
        }
    }
    cout << ans << endl;
    return 0;
}
