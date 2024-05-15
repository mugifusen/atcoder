#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n,x,y,z;
    cin >> n >> x >> y >> z;
    bool flag = false;
    if (x > y) {
        for (int i = x; i >= y; --i) {
            if (i == z) flag = true;
        }
    } else {
        for (int i = x; i <= y; ++i) {
            if (i == z) flag = true;
        }
    }
    if (flag) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
