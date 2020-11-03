#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  ll n;
  cin >> n;
  set<ll> s;
  for (ll x = 1; x * x <= n; ++x) {
    if (n % x == 0) {
      s.insert(x);
      s.insert(n / x);
    }
  }
  for (ll x : s) {
    cout << x << endl;
  }
  return 0;
}
