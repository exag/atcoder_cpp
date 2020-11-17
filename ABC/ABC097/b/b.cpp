#include <bits/stdc++.h>
#define rep(i, s, n) for (int i = s; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int x;
  cin >> x;
  int ans = 1;
  rep(b, 1, 101) rep(p, 2, 101) {
    if (pow(b, p) > x) {
      break;
    } else {
      ans = max(ans, (int)pow(b, p));
    }
  }
  cout << ans << endl;
  return 0;
}
