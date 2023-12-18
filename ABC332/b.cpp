#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int K, G, M,gml=0,mml=0;
    cin >> K >> G >> M;
    for (int i = 0; i < K; i++) {
        if (gml == G) {
            gml = 0;
        } else if (mml == 0) {
            mml = M;
        } else {
            if(gml + mml < G) {
                gml += mml;
                mml = 0;
            } else if (gml + mml >= G) {
                mml -= G - gml;
                gml = G;
            }
        }
    }
    cout << gml << ' ' <<  mml << endl;
    return 0;
}