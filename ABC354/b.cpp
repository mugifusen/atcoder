#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    vector<string> s(n);
    vector<int> c(n);
    for (int i = 0; i < n; ++i) {
        cin >> s[i] >> c[i];
    }
    sort(s.begin(), s.end());
    int sum = reduce(begin(c), end(c));
    int ans = sum % n;
    cout << s[ans] << endl;
    // for (auto m : s) cout << m << endl;
    return 0;
}