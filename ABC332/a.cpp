#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int N, S, K,sum=0;
    cin >> N >> S >> K;
    vector<int> P(N), Q(N);
    
    for (int i = 0; i < N; i++) {
        cin >> P[i] >> Q[i];
    }
    for (int i = 0; i < N; i++) {
        sum += P[i]*Q[i];
    }

    if (sum < S) {
        sum += K;
    } 
    cout << sum << endl;
    return 0;
}