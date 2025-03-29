#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    while(1) {
        int x,y,z;
        x = n / 100;
        y = n % 100 / 10;
        z = n % 10;
        if (x * y == z) {
            break;
        }
        n++;
    }
    cout << n << endl;
}