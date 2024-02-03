#include <bits/stdc++.h>
using namespace std;

int main(void) {
    string s;
    cin >> s;
    int count=0;
    for (size_t i = 0; i < s.length(); ++i) {
        if (s[i] == '.') {
            count++;
        }
    }
    bool flag = true;
    for (size_t i = 0;i < s.length()-1; ++i) {
        if (s[i] == '.') {
            count--;
            if (!count) flag = false;
        }
        if (!flag) cout << s[i+1];
    }
    cout << endl;
    return 0;
}