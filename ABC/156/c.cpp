#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  cin >> n;
  vector<int> x(n);
  rep(i, n) cin >> x[i];
  int mx = 0;
  rep(i, n) mx = max(mx, x[i]);
  int mn = 101;
  rep(i, n) mn = min(mn, x[i]);
  int ans = 1e9;
  for (int p = mn; p <= mx; ++p) {
    int hp = 0;
    rep(i, n) {
      int hpi = x[i] - p;
      hp += hpi * hpi;
    }
    ans = min(ans, hp);
  }
  cout << ans << endl;
  return 0;
}
