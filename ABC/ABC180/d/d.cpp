#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define srep(i, s, n) for (int i = s; i < (n); ++i)
#define chmax(x, y) x = max(x, y)
#define chmin(x, y) x = min(x, y)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  ll x, y, a, b;
  cin >> x >> y >> a >> b;
  ll ans = 0;
  while (1) {
    // 解説はこう
    // if (y / a < x) break;
    // if (a * x >= y) break;
    // これでもOK
    if (y / a <= x) break;
    // コストがa>=bになったら抜ける
    if (a * x >= x + b) break;
    x *= a;
    ans++;
  }
  ans += (y - 1 - x) / b;
  cout << ans << endl;
  return 0;
}
