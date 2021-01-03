#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define srep(i, s, n) for (int i = s; i < (n); ++i)
#define chmax(x, y) x = max(x, y)
#define chmin(x, y) x = min(x, y)
using namespace std;
using ll = long long;
using P = pair<ll, ll>;

int main() {
  int n;
  cin >> n;
  ll aotaka = 0;
  vector<ll> v(n);
  rep(i, n) {
    ll a, b;
    cin >> a >> b;
    aotaka += a;
    v[i] = a * 2 + b;
  }
  sort(v.rbegin(), v.rend());
  int ans = 0;
  rep(i, n) {
    ans++;
    aotaka -= v[i];
    if (aotaka < 0) break;
  }
  cout << ans << endl;
  return 0;
}
