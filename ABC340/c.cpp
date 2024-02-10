#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
    ll n;
    cin >> n;
    vector<ll> re;
    re.push_back(n);
    ll sum=0;
    while(1) {
        bool flag = true;
        for (int i = 0; i < re.size(); ++i) {
            if (re[i] >= 2) {
                flag = false;
                sum += re[i];
                re.push_back((re[i]+2-1) / 2);
                re.push_back(re[i]/2);
            } else {
                re.erase(re.begin() + i);
            }
        }
        if (flag) break;
    }
    cout << sum << endl;
    return 0;
}