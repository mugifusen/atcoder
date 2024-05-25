#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n,m;
    cin >> n >> m;
    vector<pair<int, int>> c;
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        c.push_back({a, 0});
    }
    for (int i = 0; i < m; ++i) {
        int b;
        cin >> b;
        c.push_back({b, 1});
    }
    sort(c.begin(), c.end());

    for (int i = 0; i < c.size()-1; ++i) {
        if (c[i].second == 0 && c[i+1].second == 0) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}