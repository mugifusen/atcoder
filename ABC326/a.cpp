#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int x,y;
    cin >> x >> y;
    if (y-x <= 2 && y-x >= -3) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}