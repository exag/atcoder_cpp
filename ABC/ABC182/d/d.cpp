#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define srep(i, s, n) for (int i = s; i < (n); ++i)
#define chmax(x, y) x = max(x, y)
#define chmin(x, y) x = min(x, y)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  ll ans = 0;
  ll s = 0, b = 0;
  ll max_b = 0;
  rep(i, n) {
    b += a[i];
    chmax(max_b, b);
    chmax(ans, s + max_b);
    s += b;
  }
  cout << ans << endl;
  return 0;
}
