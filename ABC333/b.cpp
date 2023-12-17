#include <bits/stdc++.h>
using namespace std;

bool func(string s) {
    int d;
    // 文字をASCIIコードにするには型キャストや演算子
    d = abs(s[0] - s[1]);
    return d == 2 || d == 3;
}

int main(void) {
    string s,t;
    cin >> s >> t;
    bool sl = func(s);
    bool tl = func(t);
    if (sl == tl) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
