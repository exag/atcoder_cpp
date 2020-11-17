#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int a, b, c, k, s, t;
  cin >> a >> b >> c >> k >> s >> t;
  int ans = 0;
  ans += s * a;
  ans += t * b;
  if (s + t >= k) ans -= (s + t) * c;
  cout << ans << endl;
  return 0;
}
