/*
ahmadexe
*/
 
#include <bits/stdc++.h> 
using namespace std;

typedef long long ll;
#define int long long
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
#define foop1(i, n)		for (ll i = 1; i <= (n); i++)
#define boop0(i, n)		for (ll i = n - 1; i >= 0; i--)
#define boop1(i, n)		for (ll i = n; i > 0; i--)

//gcd formula: __gcd(a, b)

#define trav(a, x) 		for (auto& a : x)
#define all(x)			begin(x), end(x)
#define sz(x)			(int) (x).size()
#define LCM(a, b)		(a / __gcd(a, b)) * b

void solve() {
	int n; cin >> n;
	int x = 2; double val = 0;
	for (int i = 2; i <= n; i++) {
		int k = n / i;
		double y = 0.5 * k * (2 * i + (k - 1) * i); 
		if (y > val) {
			x = i;
			val = y;
		}
	
	}
	cout << x << endl;
}
signed main() {
	int tc = 1;
	cin >> tc;
	for (int i = 1; i <= tc; i++) {
		// cout << "TEST CASE #" << i << ":\n";
		solve();
	}
	
}