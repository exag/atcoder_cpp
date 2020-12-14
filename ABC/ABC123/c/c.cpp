#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define repex(i, s, n) for (int i = s; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  ll n, a, b, c, d, e;
  cin >> n >> a >> b >> c >> d >> e;
  ll limit = min({a, b, c, d, e});
  ll unit = (n + limit - 1) / limit;
  ll ans = 5 + unit - 1;
  cout << ans << endl;
  return 0;
}
