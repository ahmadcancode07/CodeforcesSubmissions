#include <bits/stdc++.h>
using namespace std;

bool exclude(vector <int> a, int ind) {
    int n = a.size();
    vector <int> temp;
    for (int i = 0; i < n; i++) {
        if (i != ind) temp.push_back(a[i]);
    }
    vector <int> ans;
   
   for (int i = 0; i < temp.size() - 1; i++) {
        ans.push_back(__gcd(temp[i], temp[i + 1]));
   }
   if (is_sorted(ans.begin(), ans.end())) {
        return 1;
   }
   return 0;
}
 
void solve(){
    int n; cin >> n;
    vector <int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector <int> ans(n - 1);
    for (int i = 0; i < n - 1; i++) {
        ans[i] = __gcd(a[i], a[i + 1]);
    }
    if (is_sorted(ans.begin(), ans.end() - 1)) {
        cout << "YES" << endl;
        return;
    }
    int ind;
    for (int i = 0; i < n - 2; i++) {
       if (ans[i] > ans[i + 1]) {
        ind = i;
        break;
       }
    }

    if (exclude(a, ind) || exclude(a, ind + 1) || exclude(a, ind + 2)) {
        cout << "YES" << endl;
        return;
    }
    cout << "NO" << endl;
}
 
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
