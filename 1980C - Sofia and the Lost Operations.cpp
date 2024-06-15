#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector <int> a(n); vector <int> b(n); 
    for (auto &x: a) cin >> x;
    for (auto &x: b) cin >> x;
    int m; cin >> m;
    vector <int> d(m);
    for (auto &x: d) cin >> x;

    set <int> vals;
    for (int i = 0; i < n; i++) {
        vals.insert(b[i]);
    }

    map <int, int> assignments;
    for (int i = 0; i < n; i++) {
        if (a[i] != b[i]) {
            assignments[b[i]]++;
        }
    }
    bool chk = 0;
    for (int i = 0; i < m; i++) {
        if (vals.find(d[i]) == vals.end()) {
            chk = 1;
            continue;
        }
        chk = 0;
        if (assignments[d[i]] > 0) {
            assignments[d[i]]--;
        }
    }
    if (chk) {
        cout << "NO" << endl;
        return;
    }
    for (auto i = assignments.begin(); i != assignments.end(); i++) {
        if (i -> second > 0) {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}

int main() {
    int testcase; cin >> testcase;
    for (int i = 1; i <= testcase; i++) {
        // cout << "TESTCASE #" << testcase << " :";
        solve();
    }
}