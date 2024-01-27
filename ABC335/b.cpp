#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    for (int i = 0; i <= n ; ++i) {
        for (int j = 0; j <= n-i; ++j) {
            for (int k = 0; k <= n-j-i; ++k) {
                cout << i << ' ' << j << ' ' << k << endl;
            }
        }
    }
}