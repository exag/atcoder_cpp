#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  ll a, b, c;
  cin >> a >> b >> c;
  ll mod = 1e9 + 7;
  a %= mod;
  b %= mod;
  c %= mod;
  ll ans = 1;
  ans *= a;
  ans %= mod;
  ans *= b;
  ans %= mod;
  ans *= c;
  ans %= mod;
  cout << ans << endl;
  return 0;
}
