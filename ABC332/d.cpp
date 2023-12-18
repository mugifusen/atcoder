#include <bits/stdc++.h>
using namespace std;

// 途中で終わったので後に更新
int main(void) {
    int H, W;
    vector<vector<int>> Ah(H, vector<int> (W));
    vector<vector<int>> Bh(H, vector<int> (W));
    cin >> H >> W;
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cin >> Ah[i][j];
        }
    }
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cin >> Bh[i][j];
        }
    }
}