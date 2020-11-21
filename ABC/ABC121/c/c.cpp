#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  ll n, m;
  cin >> n >> m;
  vector<P> d(n);
  rep(i, n) {
    ll a, b;
    cin >> a >> b;
    d[i] = make_pair(a, b);
  }
  sort(d.begin(), d.end());
  ll ans = 0;
  rep(i, n) {
    ll a = d[i].first;
    ll b = d[i].second;
    ll buy = min(m, b);
    ans += buy * a;
    m -= buy;
  }
  cout << ans << endl;
  return 0;
}
