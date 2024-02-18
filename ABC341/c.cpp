#include <bits/stdc++.h>
using namespace std;

bool search_map(vector<string> s, string t, int i, int j) {
    for (int k = 0; k < t.size(); ++k) {
        switch(t[k]) {
            case 'L':
                j--;
                break;
            case 'R':
                j++;
                break;
            case 'U':
                i--;
                break;
            case 'D':
                i++;
        }
        // cout << s[i][j] << ' ' << "i:j = " << i << ' ' << j << endl;
        if (s[i][j] != '.') return false;
    }
    return true;
}


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
            if (s[i][j] != '.') {
                continue;
            }
            bool ans = search_map(s, t, i, j);
            if (ans) count++;
        }
    }
    cout << count << endl;
    return 0;
}