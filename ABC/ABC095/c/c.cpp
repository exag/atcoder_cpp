#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int a, b, c, x, y;
  cin >> a >> b >> c >> x >> y;
  int ans = 1e9;
  for (int i = 0; i <= max(x, y) * 2; i += 2) {
    int pc = c * i;
    int pa = a * max(0, (x - (i / 2)));
    int pb = b * max(0, (y - (i / 2)));
    int now = pa + pb + pc;
    ans = min(ans, now);
  }
  cout << ans << endl;
  return 0;
}
