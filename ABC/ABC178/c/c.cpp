#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define srep(i, s, n) for (int i = s; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

const ll mod = 1000000007;

ll powmod(ll x, ll y) {
  ll res = 1;
  rep(i, y) res = res * x % mod;
  return res;
}

int main() {
  ll n;
  cin >> n;
  ll ans = 0;
  ans += powmod(10, n);
  ans -= powmod(9, n);
  ans -= powmod(9, n);
  ans += powmod(8, n);
  ans %= mod;
  // mod同士で足し引きするとマイナスになることがあるので、もう一度足してからmodを取る
  ans = (ans + mod) % mod;
  cout << ans << endl;
  return 0;
}
