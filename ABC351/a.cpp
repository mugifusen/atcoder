#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int a,b,a_sum=0,b_sum=0;
    for (int i = 0; i < 9; ++i) {
        cin >> a;
        a_sum += a;
    }
    for (int i = 0; i < 8; ++i) {
        cin >> b;
        b_sum += b;
    }
    cout << a_sum - b_sum + 1 << endl;
    return 0;
}
