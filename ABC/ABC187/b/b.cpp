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
  vector<int> x(n), y(n);
  rep(i, n) cin >> x[i] >> y[i];
  int ans = 0;
  rep(j, n) rep(i, j) {
    double dx = x[j] - x[i];
    double dy = y[j] - y[i];
    if (-1.0 <= (dy / dx) && (dy / dx) <= 1.0) ans++;
  }
  cout << ans << endl;
  return 0;
}
