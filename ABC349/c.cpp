#include <bits/stdc++.h>
using namespace std;

int main(void) {
    string s, t;
    cin >> s >> t;
    int i = 0;
    for (char c: s) {
        if (c - 32 == t[i]) {
            i++;
            if (i == t.size()) {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    if (i == 2 && t[2] == 'X') {
        cout << "Yes" << endl;
        return 0;
    }
    cout << "No" << endl;
    return 0;
}
