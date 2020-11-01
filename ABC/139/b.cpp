#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int a, b;
  cin >> a >> b;
  if (b == 1) {
    cout << 0 << endl;
    return 0;
  }
  int ans = 1;
  if (a >= b) {
    cout << ans << endl;
    return 0;
  }
  b -= a;
  ans += (b + a - 2) / (a - 1);
  cout << ans << endl;
  return 0;
}
