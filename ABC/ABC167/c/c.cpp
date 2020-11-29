#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, m, x;
  cin >> n >> m >> x;
  vector<int> c(n);
  vector<vector<int>> a(n, vector<int>(m));
  rep(i, n) {
    cin >> c[i];
    rep(j, m) cin >> a[i][j];
  }
  int ans = 1100000000;
  rep(i, 1 << n) {
    int cost = 0;
    map<int, int> mp;
    rep(j, n) {
      if (i >> j & 1) {
        cost += c[j];
        rep(k, m) mp[k] += a[j][k];
      }
    }
    bool ok = true;
    rep(k, m) {
      if (mp[k] < x) ok = false;
    }
    if (ok) ans = min(ans, cost);
  }
  if (ans == 1100000000) ans = -1;
  cout << ans << endl;
  return 0;
}
