#include <bits/stdc++.h>
using namespace std;

int main(void) {
    string s,s_2;
    cin >> s >> s_2;

    int j = 0;
    for (int i = 0; i < s_2.size(); ++i) {
        if (s[j] == s_2[i]) {
            cout << i+1 << ' ';
            j++;
        }
    }
    cout << endl;
    return 0;
}
