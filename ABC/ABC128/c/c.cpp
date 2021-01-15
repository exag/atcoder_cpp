#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define srep(i, s, n) for (int i = s; i < (n); ++i)
#define chmax(x, y) x = max(x, y)
#define chmin(x, y) x = min(x, y)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, m;
  cin >> n >> m;
  map<int, vector<int>> mp;
  rep(i, m) {
    int k;
    cin >> k;
    rep(j, k) {
      int s;
      cin >> s;
      s--;
      mp[s].push_back(i);
    }
  }
  vector<int> p(m);
  rep(i, m) cin >> p[i];
  int ans = 0;
  rep(i, 1 << n) {
    vector<int> r(m);
    rep(j, n) {
      if (i >> j & 1) {
        for (int x : mp[j]) {
          r[x] ^= 1;
        }
      }
    }
    bool ok = true;
    rep(i, m) {
      if (r[i] != p[i]) ok = false;
    }
    if (ok) ans++;
  }
  cout << ans << endl;
  return 0;
}
