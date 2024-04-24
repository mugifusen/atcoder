#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int w,b;
    cin >> w >> b;
    string s = "wbwbwwbwbwbw";
    for (int i = 0; i < s.size(); ++i) {
        int w_n=0, b_n=0,k=i;
        for (int j = 0; j < w+b; ++j) {
            if (k == s.size()) k = 0;
            if (s[k] == 'w') {
                w_n++;
            } else {
                b_n++;
            }
            k++;
        }
        if (w == w_n && b == b_n) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}
