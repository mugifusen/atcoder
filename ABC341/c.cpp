#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int h, w, n;
    string t;
    cin >> h >> w >> n >> t;
    vector<string> s(h);
    for (int i = 0; i < h; ++i) {
        cin >> s[i];
    }
    int count = 0;
    for (int i = 1; i < h; ++i) {
        for (int j = 1; j < w; ++j) {
            bool flag = true;
            int I = i; int J = j;
            if (s[I][J] != '.') continue;
            for (auto c : t) {
                if (c == 'L') J--;
                if (c == 'R') J++;
                if (c == 'U') I--;
                if (c == 'D') I++;
                if (s[I][J] != '.') {
                    flag = false;
                    break;
                }
            }
            if (flag) count++;
        }
    }
    cout << count << endl;
    return 0;
}