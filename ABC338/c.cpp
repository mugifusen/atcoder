#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    vector<int> q(n), a(n), b(n);
    for (int i = 0; i < n; ++i) {
        cin >> q[i];
    }
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i < n; ++i) {
        cin >> b[i];
    }
    int a_peaple=0, b_peaple=0;
    for (int i = 0; i < n; ++i) {
        a_peaple = q[i] - a[i];
        for (int j = 0; j < n; ++j) {
            b_peaple = q[j] - b[j];
            
        }
    }

}