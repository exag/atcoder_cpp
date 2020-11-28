#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int w, h, n;
  cin >> w >> h >> n;
  int x1 = 0;
  int x2 = w;
  int y1 = 0;
  int y2 = h;
  rep(i, n) {
    int x, y, a;
    cin >> x >> y >> a;
    if (a == 1) x1 = max(x1, x);
    if (a == 2) x2 = min(x2, x);
    if (a == 3) y1 = max(y1, y);
    if (a == 4) y2 = min(y2, y);
  }
  int ans = max(0, x2 - x1) * max(0, y2 - y1);
  cout << ans << endl;
  return 0;
}
