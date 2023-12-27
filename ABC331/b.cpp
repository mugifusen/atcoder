#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n, s, m, l;
    cin >> n >> s >> m >> l;
    int s_min = 1000000000;
    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < 100; j++) {
            for (int k = 0; k < 100; k++) {
                if (6*i+8*j+12*k >= n) {
                    s_min = min(s_min, i*s+j*m+k*l);
                }
            }
        }
    }
    cout << s_min << endl;
    return 0;
}