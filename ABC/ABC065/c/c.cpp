#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  ll MOD = 1000000007;
  ll n, m;
  cin >> n >> m;
  if (abs(n - m) > 1) {
    cout << 0 << endl;
    return 0;
  }
  ll ans = 1;
  if (n == m) ans++;
  while (n > 1 || m > 1) {
    if (n > 1) {
      ans *= n;
      ans %= MOD;
      n--;
    }
    if (m > 1) {
      ans *= m;
      ans %= MOD;
      m--;
    }
  }
  ans %= MOD;
  cout << ans << endl;
  return 0;
}
