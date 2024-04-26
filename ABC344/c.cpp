#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n,m,l,q;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    cin >> m;
    vector<int> b(m);
    for (int i = 0; i < m; ++i) cin >> b[i];
    cin >> l;
    vector<int> c(l);
    for (int i = 0; i < l; ++i) cin >> c[i];
    cin >> q;
    vector<int> x(q);
    for (int i = 0; i < q; ++i) cin >> x[i];
    set<int> sum;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            for (int k = 0; k < l; ++k) {
                sum.insert(a[i]+b[j]+c[k]);
            }
        }
    }
    // setの要素検索countはO(logN),今回はO(log10^6)程度なので実質O(1)
    for (int i = 0; i < q; ++i) {
        if (sum.count(x[i])) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
}
