#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int a,b;
    cin >> a >> b;
    if (a+b < 9) {
        a++;
    } else {
        a--;
    }
    cout << a+b << endl;
    return 0;
}