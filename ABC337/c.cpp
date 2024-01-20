#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n, s;
    cin >> n;
    
    vector<int> a(n+1), d(n+1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        if (a[i] == -1) {
            s = i;
        } else {
            a[i]--;
        }
    }
    for (int i = 1; i <= n; i++) {
        if (a[i] != -1) {
            d[a[i]] = i;
        }
    }
    vector<int> ans = {s};
    for (int i = 1; i < n; i++) {
        s = d[s];
        ans.push_back(s);
    }
    for (int i = 1; i <= n; i++) {
        cout << ans[i] + 1 << ' ';
    }
    cout << endl;
    return 0;
}
