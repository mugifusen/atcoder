#include <bits/stdc++.h>
using namespace std;

int main(void) {
    string s;
    cin >> s;
    vector<char> s_2;
    for (int i = 0; i < s.size(); ++i) {
        if (i == s.size()-1) {
            s_2.push_back('4');
            break;
        }
        s_2.push_back(s[i]);
    }
    for (auto i : s_2) cout << i;
    cout << endl;
    return 0;
}