#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    vector<int> a(n), pos(n+1);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        pos[a[i]] = i;
    }
    int i = 0;
    vector<pair<int,int>> swaps;
    while(i < n-1) {
        int j = pos[i+1];
        if (i != j) {
            swaps.push_back({i+1, j+1});
            swap(pos[a[i]],pos[a[j]]);
            swap(a[i], a[j]);
        }
        i++;
    }
    cout << swaps.size() << endl;
    for (auto &p : swaps) {
        cout << p.first << ' ' << p.second << endl;
    }
    return 0;
}
