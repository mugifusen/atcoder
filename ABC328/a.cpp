#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n, x;
    cin >> n >> x;
    vector<int> s(n);
    for (int i = 0; i < n; ++i) {
        cin >> s[i];
    }
    int sum=0;
    for (int i = 0; i < n; ++i) {
        if (s[i] <= x) sum += s[i];
    }
    cout << sum << endl;
    return 0;
}