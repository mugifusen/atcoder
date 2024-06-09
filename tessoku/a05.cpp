#include <bits/stdc++.h>
using namespace std;

int main(void) { 
    int n, k;
    cin >> n >> k;

    int diff, count=0;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            diff = k-i-j;
            if (diff > 0 && diff <= n) {
                // cout << i << ' ' << j << ' ' << diff << endl;
                count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}