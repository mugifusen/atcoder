#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int N;
    cin >> N;
    vector<int> A(N), B(N);
    for (int i = 0; i < N; i++) {
        int sum=0;
        for (int j = 0; j < N; j++) {
            //A[k] > A[i] kはiではないが成立するものsumをbに入れる
            // mapを用いて上記の条件式に一致するもの以外を0にする。その後sumを取る。
            if (i != j && A[i] < A[j]) {
                sum += A[j];
            }
        }
        cout << sum << endl;
        B[i] = sum;
    }

    for (int i = 0; i < B.size(); i++) {
        cout << B[i] << ' ';
    }
    cout << endl;
    return 0;
}