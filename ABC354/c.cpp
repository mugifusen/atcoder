#include <bits/stdc++.h>
using namespace std;

struct Card {
    int attack;
    int cost;
    int index;
};

// 比較関数(falseならsort)
bool comp_Card(const Card &a, const Card &b) {
    return a.attack > b.attack;
}

int main(void) {
    int n;
    cin >> n;
    vector<Card> cards(n);
    for (int i = 0; i < n; ++i) {
        cin >> cards[i].attack >> cards[i].cost;
        cards[i].index = i+1;
        // int a,c; cin >> a >> c; cards[i]={a,c,i};
    }
    sort(cards.begin(), cards.end(), comp_Card);
    vector<int> ans;
    int min_cost = cards[0].cost;
    ans.push_back(cards[0].index);
    for (int i = 1; i < n; ++i) {
        if (cards[i].cost < min_cost) {
            ans.push_back(cards[i].index);
            min_cost = cards[i].cost;
        }
    }
    sort(ans.begin(), ans.end());
    cout << ans.size() << endl;
    for (int i = 0; i < ans.size(); ++i) {
        cout << ans[i] << ' ';
    }
    cout << endl;
    return 0;
}
