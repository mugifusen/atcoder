#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n;
    string s;
    cin >> n >>  s;
    
    vector<int> words(26,0);
    int count=0;
    for (int i = 0; i < n; ++i) {
        count++;
        if (s[i] != s[i+1]) {
            words[s[i]-'a'] = max(count, words[s[i]-'a']);
            count=0;
        }
    }
    int sum = reduce(begin(words), end(words));
    cout << sum << endl;
    return 0;
}