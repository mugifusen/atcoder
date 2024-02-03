#include <bits/stdc++.h>
using namespace std;

void conf_scope(int h, int w, int &x, int &y) {
    if (y >= h) y = 0;
    if (y < 0) y = h-1;
    if (x >= w) x = 0;
    if (x < 0) x = w-1;
}

void select(int dir, int &x, int &y) {
    if (dir == 0) {
        y--;
    } else if (dir == 1) {
        x++;
    } else if (dir == 2) {
        y++;
    } else {
        x--;
    }
}

int main(void) {
    int h, w, n;
    cin >> h >> w >> n;
    vector<vector<char>> color(h, vector<char>(w, '.'));
    int x=0, y=0, dir=0;
    // 以下に操作の処理
    for (int i = 0; i < n; ++i) {
        if (color[y][x] == '.') {
            // 白の処理
            color[y][x] = '#';
            dir++;
            if (dir == 4) dir = 0;
            select(dir, x, y); // マス1移動
            conf_scope(h, w, x, y);
        } else {
            // 黒の処理
            color[y][x] = '.';
            dir--;
            if (dir == -1) dir = 3;
            select(dir, x, y); // マス1移動
            conf_scope(h, w, x, y);
        }
    }
    for (int i = 0; i < h; ++i) {
        for (int j = 0; j < w; ++j) {
            cout << color[i][j];
        }
        cout << endl;
    }
    return 0;
}