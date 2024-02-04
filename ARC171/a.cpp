#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main(void) {
     int t;
     cin >> t;
     vector<int> n, a, b;
     rep(i,t) {
        // 要素が明示されていない状態はまだメモリを確保していない。
        // その場合はpush_backで動的に追加していく方法
        // 宣言するとメモリが確保されてるからインデックスでアクセスが可能となる
        cin >> n[i] >> a[i] >> b[i]; 
     }
     rep(i,t) {
        if (n[i]-a[i] > 0) {
            // ポーンを置く操作
            if (n[i]-a[i] == 1) {
                if (a[i]+b[i] == 1) {
                    cout << "Yes" << endl;
                } else {
                    cout << "No" << endl;
                }
            } else if ((n[i]-a[i])%2 == 0) {
                cout << n[i] << ' ' << a[i] << ' ' << b[i] << endl;
                if (((n[i]-a[i])/2)*n[i] >= b[i]) {
                    cout << "Yes" << endl;
                } else {
                    cout << "No" << endl;
                }
            } else if ((n[i]-a[i])%2 == 1) {
                if (((n[i]-a[i])/2+1)*n[i] < b[i]) {
                    cout << "No1" << endl;
                } else {
                    cout << "Yes" << endl;
                }
            }
        } else if (n[i]-a[i] == 0 && b[i] == 0) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
     }
     return 0;
}