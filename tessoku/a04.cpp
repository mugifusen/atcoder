#include <bits/stdc++.h>
using namespace std;

int main(void) { 
    int n;
    cin >> n;
    string r_ans;
    while(n) {
        r_ans.append(to_string(n%2));
        n /= 2;
    }
    reverse(r_ans.begin(), r_ans.end());
    cout << setw(10) << setfill('0') << r_ans << endl;
    return 0;
} 

// 別解
// for (int i = 9; i >= 0; --i) {
//     int x = (1 << i);
//     cout << n / x % 2; 
// }
// cout << endl;