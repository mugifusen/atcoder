#include <bits/stdc++.h>
using namespace std;

int main(void) {
    string s;
    cin >> s;
    if (!isupper(s[0])) { 
        cout << "No" << endl;
        return 0;
    }
    for (int i = 1; i < s.length(); i++) {
        if (isupper(s[i])) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}