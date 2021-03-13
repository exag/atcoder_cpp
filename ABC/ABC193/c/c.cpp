#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define srep(i, s, n) for (int i = s; i < (n); ++i)
#define chmax(x, y) x = max(x, y)
#define chmin(x, y) x = min(x, y)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  ll n;
  cin >> n;
  set<ll> s;
  for (ll a = 2; a * a <= n; a++) {
    ll x = a * a;
    while (x <= n) {
      s.insert(x);
      x *= a;
    }
  }
  cout << n - s.size() << endl;
  return 0;
}
