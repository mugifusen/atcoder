#include <bits/stdc++.h>
using namespace std;

int main(void) {
    string s;
    cin >> s;
    char tmp;
    int count=0;
    for (int i = 0; i < s.size()-1; ++i) {
        if (s[i] != s[i+1]) {
            tmp = s[i];
            count++;
        }
        
    }
}
