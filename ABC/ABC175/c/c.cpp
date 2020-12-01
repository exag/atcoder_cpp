#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

ll solve() {
  ll x, k, d;
  cin >> x >> k >> d;
  x = abs(x);
  if (d <= x / k) return x - d * k;
  ll c = x / d;
  ll m = x - c * d;
  k -= c;
  if (k % 2 == 0) return m;
  return abs(d - m);
}

int main() {
  cout << solve() << endl;
  return 0;
}
