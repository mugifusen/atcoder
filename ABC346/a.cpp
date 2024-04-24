#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    vector<int> b(n-1);
    for (int i = 0; i < n-1; ++i) {
        b[i] = a[i]*a[i+1];
    }
    for (auto &i : b) {
        cout << i << ' ';
    }
    cout << endl;
    return 0;
}
