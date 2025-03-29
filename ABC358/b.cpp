#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a;
    cin >> n >> a;
    vector<int> t(n);
    for (int i = 0; i < n; ++i) cin >> t[i];
    
    int current = 0;
    for (int i = 0; i < n; ++i) {
        if (current < t[i]) {
            current = t[i];
        }
        cout << current + a << ' ';
        current += a;
    }
    cout << endl;
    return 0;
}
