#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int starting[2];
    int n, k; cin >> n >> k >> starting[0] >> starting[1];
    string out[2] = {"Bodya", "Sasha"};
    vector <int> weight(n + 1);
    vector <int> edge(n + 1);
    for (int i = 1; i <= n; i++) cin >> edge[i];
    for (int i = 1; i <= n; i++) cin >> weight[i];
    int max_score[2] = {0};
    for (int i = 0; i < 2; i++) {
        max_score[i] = k * weight[starting[i]];
        int rem = k - 1;
        int sum = weight[starting[i]];
        int current_node = edge[starting[i]];
        while (current_node != starting[i] && rem >= 0) {
            max_score[i] = max(max_score[i], sum + weight[current_node] * rem);
            sum += weight[current_node];
            rem--;
            current_node = edge[current_node];
        }
    }
    if (max_score[0] > max_score[1]) cout << out[0] << endl;
    else if (max_score[0] < max_score[1]) cout << out[1] << endl;
    else cout << "Draw" << endl;
}

signed main() {
    int testcase; cin >> testcase;
    for (int i = 1; i <= testcase; i++) {
        // cout << "TESTCASE #" << testcase << " :";
        solve();
    }
}