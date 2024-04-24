#include <bits/stdc++.h>
using namespace std;

int main(void) {
    string s;
    cin >> s;
    set<string> st;
    for (int i = 1; i <= s.size(); ++i) {
        for (int j = 0; j+i <= s.size(); ++j) {
            st.insert(s.substr(j, i));
        }
    }
    cout << st.size() << endl;
    return 0;
}
