#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

const int mod = 1e9 + 7;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  ll ans = 0;
  ll x = 0;
  rep(i, n) {
    ans += a[i] * x;
    ans %= mod;
    x += a[i];
    x %= mod;
  }
  cout << ans << endl;
  return 0;
}
