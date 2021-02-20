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
  vector<int> a(m), b(m);
  rep(i, m) {
    int ai, bi;
    cin >> ai >> bi;
    ai--;
    bi--;
    a[i] = ai;
    b[i] = bi;
  }
  int k;
  cin >> k;
  vector<int> c(k), d(k);
  rep(i, k) {
    int ci, di;
    cin >> ci >> di;
    ci--;
    di--;
    c[i] = ci;
    d[i] = di;
  }
  int ans = 0;
  rep(i, 1 << k) {
    vector<int> s(n);
    rep(j, k) {
      if (i >> j & 1) {
        s[d[j]] = 1;
      } else {
        s[c[j]] = 1;
      }
    }
    int cnt = 0;
    rep(k, m) {
      if (s[a[k]] > 0 && s[b[k]] > 0) {
        cnt++;
      }
    }
    chmax(ans, cnt);
  }
  cout << ans << endl;

  return 0;
}
