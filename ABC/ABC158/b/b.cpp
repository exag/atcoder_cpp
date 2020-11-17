#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  ll n, a, b;
  cin >> n >> a >> b;
  ll c = n / (a + b);
  ll ans = c * a;
  n -= c * (a + b);
  ans += min(n, a);
  cout << ans << endl;
  return 0;
}
