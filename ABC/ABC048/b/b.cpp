#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  ll a, b, x;
  cin >> a >> b >> x;
  if (x == 1) {
    cout << b - a + 1 << endl;
    return 0;
  }
  ll ans = b / x - (a - 1) / x;
  if (a == 0) ans++;
  cout << ans << endl;
  return 0;
}
