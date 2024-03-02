#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n, t;
    cin >> n >> t;
    vector<int> a(t), b(t), player(n,0);
    for (int i = 0; i < t; ++i) {
        cin >> a[i] >> b[i];
    }
    set<int> unique_num;
    for (int i = 0; i < t; ++i) {
        player[a[i]-1] += b[i];
        for (auto i : player) unique_num.insert(i);
        cout << unique_num.size() << endl;
        unique_num.clear();
    }
    return 0;
}