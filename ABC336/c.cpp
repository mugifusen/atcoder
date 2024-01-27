#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
    ll n;
    cin >> n;
    n--;
    vector<int> a;
    // 5進数として考え、N-1番目の値を求め10進数に戻す
    while(n) {
        a.push_back(n%5);
        n /= 5;
    }
    if (a.empty()) {
        a.push_back(0);
    }
    reverse(a.begin(), a.end());
    for (auto& x: a) cout << x*2;
    cout << endl;
    
    return 0;
}