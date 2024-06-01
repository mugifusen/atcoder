#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int N, M, K;
    cin >> N >> M >> K;
    vector<int> c(M);
    vector<vector<int>> a(M);
    vector<char> r(M);
    for (int i = 0; i < M; ++i) {
        cin >> c[i];
        for (int j = 0; j < c[i]; ++j) {
            int A;
            cin >> A;
            a[i].push_back(A);
        }
        cin >> r[i];
    }
    int ans=0;
    for (int i = 0; i < (1 << N); ++i) {
        bool flag = true;
        for (int j = 0; j < M; ++j) {
            if (!flag) break;
            int count=0;
            for (auto k : a[j]) {
                if (i & (1 << (k-1))) {
                    count++;
                }
            }
            if (r[j] == 'o' && count < K) {
                flag = false;
            } else if (r[j] == 'x' && count >= K) {
                flag = false;
            }
        }
        if (flag) ans++;
    }
    cout << ans << endl;
    return 0;
}
