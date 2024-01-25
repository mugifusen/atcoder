#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int N;
    cin >> N;
    vector<int> A(N), B(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    for (int i = 0; i < N; i++) {
        int sum = 0;
        for (int j = 0; j < N; j++) {
            if (i != j && A[i] < A[j]) {
                sum += A[j];
            }
        }
        B[i] = sum;
    }

    for (int i = 0; i < N; i++) {
        cout << B[i] << ' ';
    }
    cout << endl;
    return 0;
}