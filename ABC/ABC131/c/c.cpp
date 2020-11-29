#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  ll a, b, c, d;
  cin >> a >> b >> c >> d;
  auto f = [&](ll n) {
    ll dc = n / c;
    ll dd = n / d;
    ll both = n / lcm(c, d);
    return n - (dc + dd - both);
  };
  ll ans = f(b) - f(a - 1);
  cout << ans << endl;
  return 0;
}
