#include <bits/stdc++.h>
using namespace std;

void solve() {
    int sz; cin >> sz;
    string s; cin >> s;
    int x = 0, y = 0;
    for (int i = 0; i < sz; i++) {
        if (s[i] == 'N') y++;
        if (s[i] == 'S') y--;
        if (s[i] == 'W') x--;
        if (s[i] == 'E') x++;
    }
    if (abs(x) % 2 || abs(y) % 2 || (x == 0 && y == 0 && sz == 2)) {
        cout << "NO " << endl;
        return;
    }
    string ans = "";
    int n = 0, so = 0, e = 1, w = 1;
    char m[2] = {'R', 'H'};
    for (int i = 0; i < sz; i++) {
        if (s[i] == 'N') ans += m[n], n ^= 1;
        if (s[i] == 'S') ans += m[so], so ^= 1;
        if (s[i] == 'E') ans += m[e], e ^= 1;
        if (s[i] == 'W') ans += m[w], w ^= 1;
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