#include <bits/stdc++.h>
using namespace std;

int main(void) {
    string s;
    cin >> s;
    vector<vector<char>> c(2, vector<int>(0,0));
    for (int i = 0; i < s.size(); ++i) {
        c[s[i]]++;
    }
    int ans;
    if (c[0] < c[1]) {
        ans = s.find(c[1]);
    } else {
        ans = s.find(c[0]);
    }
    cout << ans+1 << endl;
    return 0;
}
