#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    vector<vector<char>> a(n, vector<char>(n));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> a[i][j];
        }
    }
    char b;
    pair<int, int> ans;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> b;
            if (a[i][j] != b) {
                ans = make_pair(i+1, j+1);
            }
        }
    }
    cout << ans.first << ' ' << ans.second << endl;
    return 0;
}
