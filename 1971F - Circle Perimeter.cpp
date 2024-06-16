#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int a; cin >> a;
    int b = a + 1;
    int ans = 0;
    for (int x = 1; x <= a; x++) {
        int bottom = ceil(sqrt(a * a - x * x));
        int top = ceil(sqrt(b * b - x * x));
        ans += (top - bottom);
    }
    ans--;
    ans *= 4;
    ans += 4;
    cout << ans << endl;
}

signed main() {
    int testcase; cin >> testcase;
    for (int i = 1; i <= testcase; i++) {
        // cout << "TESTCASE #" << testcase << " :";
        solve();
    }
}