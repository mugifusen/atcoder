#include <bits/stdc++.h>
using namespace std;

int main(void) {
    string s;
    cin >> s;
    int count=0;
    for (int i = 0; i < s.size(); ++i) {
        if (islower(s[i])) count++;
    }
    if (s.size()-count > count) {
        for (int i = 0; i < s.size(); ++i) {
            if (islower(s[i])) s[i] = toupper(s[i]);
        }
    } else {
        for (int i = 0; i < s.size(); ++i) {
            if (isupper(s[i])) s[i] = tolower(s[i]);
        }
    }
    cout << s << endl;
    return 0;
}
