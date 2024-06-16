#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n; cin >> n;
    vector <int> a(n + 1);
    for (int i = 1; i <= n; i++) cin >> a[i];
    map <int, int> lastocc;
    map <int, int> maxd;

    for (int i = 1; i <= n; i++) {
        int x = 0;
        for (int j = 0; x <= a[i]; j++) {
            x = (1LL << j);
            if (x & a[i]) {
                maxd[j] = max(maxd[j], i - lastocc[j]);
                lastocc[j] = i;
            }
        }
    }
    for (auto i = maxd.begin(); i != maxd.end(); i++) {
        maxd[i->first] = max(maxd[i->first], n + 1 - lastocc[i->first]);
    }
    int ans = 1;
    for (auto i = maxd.begin(); i != maxd.end(); i++) ans = max(ans, i->second);
    cout << ans << endl;
}

signed main() {
    int testcase; cin >> testcase;
    for (int i = 1; i <= testcase; i++) {
        // cout << "TESTCASE #" << testcase << " :";
        solve();
    }
}