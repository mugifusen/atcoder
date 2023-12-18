#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int N, M, T, T2=0,count=0;
    string S;
    cin >> N >> M;
    cin >> S;
    T = M;
    for (int i = 0; i < N; i++) {
        if (S[i]  == '0') {
            T = M;
            T2 = count;
        } else if (S[i] == '1') {
            if (T) {
                T--;
            } else {
                if (!T2) {
                    T2++;
                    count++;
                }
                T2--;
            }
        } else if (S[i] == '2') {
            if (!T2) {
                T2++;
                count++;
            }
            T2--;
        }
    }
    cout << count << endl;
    return 0;
}