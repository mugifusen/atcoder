#include <bits/stdc++.h>
using namespace std;

int main(void) {
    string s;
    cin >> s;
    vector<int> freq(256, 0);
    for (int i = 0; i < s.length(); ++i) {
        // ASCIIコードが添え字
        freq[s[i]]++;
    }
    int max=-1, tmp=0;
    for (int i = 0; i < 256; ++i) {
        if (freq[i] > max) {
            max = freq[i];
            tmp = i;
        }
    }
    cout << char(tmp) << endl;
    return 0;
}