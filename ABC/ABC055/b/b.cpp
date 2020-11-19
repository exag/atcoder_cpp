#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  ll n;
  cin >> n;
  ll mod = 1e9 + 7;
  ll ans = 1;
  rep(i, n) {
    ans *= (i + 1);
    ans %= mod;
  }
  cout << ans << endl;
  return 0;
}
