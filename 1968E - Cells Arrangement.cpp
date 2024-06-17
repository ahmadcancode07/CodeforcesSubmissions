#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n; cin >> n;
    cout << "1 1" << endl;
    cout << "2 1" << endl;
    for (int i = 3; i < n; i++) {
        cout << 1 << ' ' << i << endl;

    }
    if (n > 2) cout << n << ' ' << n << endl;
    cout << endl;
}

signed main() {
    int testcase; cin >> testcase;
    for (int i = 1; i <= testcase; i++) {
        // cout << "TESTCASE #" << testcase << " :";
        solve();
    }
}