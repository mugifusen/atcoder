#include <bits/stdc++.h>
using namespace std;

int main(void) {
    string s, t;
    cin >> s;
    s = s.substr(3);
    int num;
    for (int i = 1; i <= 349; ++i) {
        if (i == 316) {
            continue;
        }
        num = 3 - to_string(i).length();
        t = to_string(i).insert(0, num, '0');
        if (t == s) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;

}