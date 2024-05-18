#include <bits/stdc++.h>
using namespace std;

// int func(int x) {
//     int sum = 1;
//     for (int i = 0; i < x; ++i) {
//         sum *= 2;
//     }
//     return sum;
// }
// int main(void) {
//     int h, plant=0, n=0;
//     cin >> h;
//     for (int i = 0; plant <= h; ++i) {
//         plant += func(i);
//         n++;
//     }
//     cout << n << endl;
//     return 0;
// }

int main(void) {
    int h;
    cin >> h;
    int ans = 0, now = 0;
    while(now <= h) {
        now += 1 << ans;
        ans++;
    }
    cout << ans << endl;
    return 0;
}