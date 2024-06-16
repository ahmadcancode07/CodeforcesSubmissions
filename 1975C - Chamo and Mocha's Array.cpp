#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector <int> a(n);
    for (auto &x: a) cin >> x;

    int ans = 0;
    for (int i = 0; i < n - 1; i++) {
        ans = max(ans, min(a[i], a[i + 1]));
    }
    for (int i = 0; i < n - 2; i++) {
        vector <int> temp = {a[i], a[i + 1], a[i + 2]};
        sort(temp.begin(), temp.end());
        ans = max(ans, temp[1]);
    }
    cout << ans << endl;
}

int main() {
    int testcase; cin >> testcase;
    for (int i = 1; i <= testcase; i++) {
        // cout << "TESTCASE #" << testcase << " :";
        solve();
    }
}