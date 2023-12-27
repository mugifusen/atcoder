#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int M, D, y, m, d;
    cin >> M >> D >> y >> m >> d;
    if (D == d) {
        d = 1;
        if (M == m) {
            y++;
            m = 1;
        } else {
            m++;
        }
    } else {
        d++;
    }
    cout << y << ' ' << m << ' ' << d << endl;
    return 0;
}