#include <bits/stdc++.h>
using namespace std;

int main(void) {
    string s;
    cin >> s;
    for (int i = 0; i < s.size()-1; ++i) {
        cout << s[i] << ' ';
    }
    cout << s.back() << endl;
    return 0;
}