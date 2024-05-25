#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int a,b;
    cin >> a >> b;
    if (a == b) {
        cout << "-1" << endl;
        return 0;
    }
    for (int i = 1; i <= 3; ++i) {
        if (i != a && i != b) {
            cout << i << endl;
        }
    }
    return 0;
}