#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n; cin >> n;
    vector <int> a(n);
    for (auto &x: a) cin >> x;

    map <tuple <int, int, int>, int> cnt;
    int ans = 0;
    for (int i = 0; i < n - 2; i++) {
        ans += cnt[{a[i], a[i + 1], 0}] + cnt[{a[i], 0, a[i + 2]}] + cnt [{0, a[i + 1], a[i + 2]}] - 3 * cnt[{a[i], a[i + 1], a[i + 2]}];
        cnt[{a[i], a[i + 1], a[i + 2]}]++;
        cnt[{a[i], a[i + 1], 0}]++;
        cnt[{a[i], 0, a[i + 2]}]++;
        cnt[{0, a[i + 1], a[i + 2]}]++;
    }
    cout << ans << endl;
}

signed main() {
    int testcase; cin >> testcase;
    for (int i = 1; i <= testcase; i++) {
        // cout << "TESTCASE #" << testcase << " :";
        solve();
    }
}