#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define srep(i, s, n) for (int i = s; i < (n); ++i)
#define chmax(x, y) x = max(x, y)
#define chmin(x, y) x = min(x, y)
using namespace std;
using ll = long long;
using P = pair<int, int>;

ll f(ll n) { return n * (n + 1) / 2; }

int main() {
  int n;
  cin >> n;
  ll ans = 0;
  vector<int> d(n + 1);
  for (int i = 1; i <= n; ++i) {
    for (int j = i; j <= n; j += i) {
      d[j]++;
    }
  }
  for (int i = 1; i <= n; ++i) {
    ans += ll(i) * d[i];
  }
  cout << ans << endl;
  return 0;
}
