#include <bits/stdc++.h>
using namespace std;

int main(void) {
    vector<int> a;
    int in;
    // 入力がこれ以上存在しない時falseを返してループ終了
    while (cin >> in) {
        a.push_back(in);
    }
    for (int i = a.size()-1; i >= 0; --i) {
        cout << a[i] << endl;
    }
    return 0;
}
