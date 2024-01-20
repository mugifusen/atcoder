#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    vector<int> x(n),y(n);
    int x_sum=0,y_sum=0;

    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
        x_sum += x[i];
        y_sum += y[i];
    }
    if (x_sum > y_sum) {
        cout << "Takahashi" << endl;
    } else if (x_sum < y_sum) {
        cout << " Aoki" << endl;
    } else {
        cout << "Draw" << endl;
    }
    return 0;

}