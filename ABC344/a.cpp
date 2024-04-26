#include <bits/stdc++.h>
using namespace std;

int main(void) {
    string s;
    cin >> s;
    int count = 0;
    for (auto c : s) {
        if (c == '|') {
            count++;
            continue;
        }
        if (!(count > 0 && count < 2)) {
            cout << c;
        }
    }
    cout << endl;
    return 0;
}

// // 別解
// int main(void) {
//     string s;
//     cin >> s;
//     int x = s.find('|'); 
//     int y = s.rfind('|');
//     cout << s.substr(0, x)+s.substr(y+1) << endl;
//     return 0;
// }
