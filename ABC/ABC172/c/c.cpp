#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define srep(i, s, n) for (int i = s; i < (n); ++i)
#define chmax(x, y) x = max(x, y)
#define chmin(x, y) x = min(x, y)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, m, k;
  cin >> n >> m >> k;
  vector<ll> a(n), b(m);
  rep(i, n) cin >> a[i];
  rep(i, m) cin >> b[i];
  vector<ll> ca(n + 1), cb(m + 1);
  rep(i, n) ca[i + 1] = ca[i] + a[i];
  rep(i, m) cb[i + 1] = cb[i] + b[i];
  int ans = 0;
  auto bs = [&](int x) {
    int l = 0;
    int r = m + 1;
    while (r - l > 1) {
      int c = (l + r) / 2;
      if (x < cb[c]) {
        r = c;
      } else {
        l = c;
      }
    }
    return l;
  };
  rep(ai, n + 1) {
    ll sa = ca[ai];
    if (sa > k) break;
    ll zan = k - sa;
    int bi = bs(zan);
    if (bi == m + 1) continue;
    chmax(ans, ai + bi);
  }
  cout << ans << endl;
  return 0;
}
