/*
ahmadexe
*/
 
#include <bits/stdc++.h> 
using namespace std;

typedef long long ll;
// #define int long long
const ll bignum = 1e9;
const ll mod = 1000000007;

typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vector<int>> vii;
// (a + b) % m = ((a % m) + (b % m)) % m
// (a * b) % m = ((a % m) * (b % m)) % m
// (a - b) % m = ((a % m) - (b % m) + m) % m
// (a / b) % m = ((a % m) * (b^-1 % m) + m) % m
#define endl '\n'
#define vec vector
#define fi first
#define se second
#define pb push_back
#define eb emplace_back
#define lb lower_bound
#define ub upper_bound
#define mp(a, b) make_pair(a, b)

#define foop0(i, n) 	for (ll i = 0; i < (n); i++)
#define foop 1(i, n)		for (ll i = 1; i <= (n); i++)
#define boop0(i, n)		for (ll i = n - 1; i >= 0; i--)
#define boop1(i, n)		for (ll i = n; i > 0; i--)

//gcd formula: __gcd(a, b)

#define trav(a, x) 		for (auto& a : x)
#define all(x)			begin(x), end(x)
#define sz(x)			(int) (x).size()
#define LCM(a, b)		(a / __gcd(a, b)) * b

void solve() {
	int n, m;
	cin >> n >> m;
	bool grid[n + 1][m + 1];
	for (int i = 1; i <= n; i++) {
		string s; cin >> s;
		for (int j = 1; j <= m; j++) {
			if (s[j - 1] == '#') grid[i][j] = 1;
			else grid[i][j] = 0;
		}
	}

	int hval = 0, vval = 0, x = 0, y = 0;
	for (int i = 1; i <= n; i++) {
		int cnt = 0;
		for (int j = 1; j <= m; j++) {
			if (grid[i][j]) cnt++;
		}
		if (cnt > hval) {
			y = i;
			hval = cnt;
		}
	}
	for (int i = 1; i <= m; i++) {
		int cnt = 0;
		for (int j = 1; j <= n; j++) {
			if (grid[j][i]) cnt++;
		}
		if (cnt > vval) {
			x = i;
			vval = cnt;
		}
	}
	cout << y << ' ' << x << endl;
}
signed main() {
	int tc = 1;
	cin >> tc;
	for (int i = 1; i <= tc; i++) {
		// cout << "TEST CASE #" << i << ":\n";
		solve();
	}
	
}