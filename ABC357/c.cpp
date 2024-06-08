#include <bits/stdc++.h>
using namespace std;

void func(vector<vector<char>>& g_map, int k, int wi, int wj) {
    if (k == 0) {
        g_map[wi][wj] = '#';
    } else {
        int grid_c = pow(3, k-1);
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                if (i == 1 && j == 1) {
                    for (int k = 0; k < grid_c; ++k) {
                        for (int l = 0; l < grid_c; ++l) {
                            g_map[wi + i * grid_c + k][wj + j * grid_c + l] = '.';
                        }
                    }
                } else {
                    func(g_map, k-1, wi + i * grid_c, wj + j * grid_c);
                }
            }
        }
    }
}

int main(void) {
    int n;
    cin >> n;
    int grid_l = pow(3, n);
    vector<vector<char>> g_map(grid_l, vector<char>(grid_l, '.'));
    func(g_map, n, 0, 0);
    
    for (int i = 0; i < grid_l; ++i) {
        for (int j = 0; j < grid_l; ++j) {
            cout << g_map[i][j];
        }
        cout << endl;
    }
    return 0;
}
