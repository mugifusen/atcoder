#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n,k;
    cin >> n >> k;
    set<int> a;
    for (int i = 0; i < n; ++i) {
        int tmp;
        cin >> tmp;
        if (tmp <= k) a.insert(tmp);
    }
    // 演算の時点でオーバーフローが発生するので、long longでキャスト
    long long sum = (long long)k*(k+1)/2;
    for (auto i : a) {
        sum -= i;
    }
    cout << sum << endl;
    return 0;
}
