#include <bits/stdc++.h>
using namespace std;

int main(void) {
    string s;
    cin >> s;
    vector<int> c(26);
    for (int i = 0; i < s.size(); ++i) {
        c[s[i]-'a']++;
    }
    bool flag = true;
    for (int i = 1; i <= s.size(); ++i) {
        int count = 0;
        for (auto &j : c) {
            if (i == j) count++;
        }
        if (!(count == 0 || count == 2)) {
            cout << "No" << endl;
            flag = false;
            break;
        }
    }
    if (flag) cout << "Yes" << endl;
    return 0;
}
