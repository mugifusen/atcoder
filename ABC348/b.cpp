#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    vector<pair<int,int>> p(n);
    for (int i = 0; i < n; ++i) {
        cin >> p[i].first >> p[i].second;
    }
    for (int i = 0; i < n; ++i) {
        int max = 0, dist, max_p = -1;
        for (int j = 0; j < n; ++j) {
            dist = pow(p[i].first - p[j].first,2)+pow(p[i].second - p[j].second,2);
            if (max < dist) {
                max = dist;
                max_p = j;
            }
        }
        cout << max_p+1 << endl;
    }
    return 0;
}
