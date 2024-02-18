#include <bits/stdc++.h>
using namespace std;

// vectorの末尾に要素xを追加するのはans.push_back(x)
// vectorの末尾からx番目の要素を参照するにはans[ans.size()-x]
int main(void) {
    int n;
    cin >> n;
    vector<pair<int,int>> q(n);
    for (int i = 0; i < n; ++i) {
        cin >> q[i].first >> q[i].second;
    }
    vector<int> ans;
    for (int i = 0; i < n; ++i) {
        if (q[i].first == 1) {
            ans.push_back(q[i].second);
        } else {
            cout << ans[ans.size() - q[i].second] << endl;
        }
    }
    return 0;

}