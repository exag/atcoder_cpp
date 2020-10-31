#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int a, b, c, k;
  cin >> a >> b >> c >> k;
  int z = 0;
  int ans = 0;
  if (k <= a) {
    cout << k << endl;
    return 0;
  }
  ans = a;
  k -= a;
  if (k <= b) {
    cout << ans << endl;
    return 0;
  }
  k -= b;
  ans -= k;
  cout << ans << endl;
  return 0;
}
