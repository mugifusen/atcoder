#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n;
    cin >> n;

    for (int i = 0;; ++i) {
        if (n & (1 << i)) {
            cout << i << endl;
            break;
        }
    }
    return 0;
}