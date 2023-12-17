#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int N, k;
    cin >> N;
    // 解は12桁までなので、12桁までのレビュニットで試行する
    // dは桁数,iは1個数,jは2の個数,kは3の個数として,3つのレピュニットの和のN番目に小さい値を探す
    // 具体例から法則？どのようにi,j,kの値計算を実装したか考える
    for (int d = 1; d <= 12; d++) {
        for (int i = d - 1; i >= 0; i--) {
            for (int j = d - i - 1; j >= 0; j--) {
                k = d - i - j;
                N--;
                if (N == 0) {
                    cout << string(i, '1') << string(j, '2') << string(k, '3') << endl;
                }
            }
        }
    }
    return 0;
}