#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    vector<int> d(n);
    for (int i = 0; i < n; ++i) {
        cin >> d[i];
    }
    int count=0;
    for (int i = 1; i <= n; ++i) {
        string month = to_string(i);
        for (int j = 1; j <= d[i-1]; j++) {
            bool flag = true;
            string date = month + to_string(j);
            char first = date[0];
            for (int k = 1; k < date.size(); ++k) {
                if (first != date[k]) flag = false;
            }
            if (flag) count++;
        }
    }
    cout << count << endl;
    return 0;
}

// ゾロ目か判断する他の書き方
// (dataの各文字をsetで管理し、集合の大きさが1ならok)
// if (size(set<char> unique_chars(data.begin(), data.end())) == 1) count++;