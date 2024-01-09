#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n, l, count=0;
    cin >> n >> l;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] >= l) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}