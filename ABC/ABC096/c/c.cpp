#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int h, w;
  cin >> h >> w;
  vector<string> s(h);
  rep(i, h) cin >> s[i];
  vector<P> d(4);
  d[0] = make_pair(0, 1);
  d[1] = make_pair(0, -1);
  d[2] = make_pair(1, 0);
  d[3] = make_pair(-1, 0);
  string ans = "Yes";
  rep(y, h) rep(x, w) {
    if (s[y][x] == '.') continue;
    bool ok = false;
    for (P di : d) {
      int dx = di.first;
      int dy = di.second;
      int nx = x + dx;
      int ny = y + dy;
      if (nx < 0 || nx >= w) continue;
      if (ny < 0 || ny >= h) continue;
      if (s[ny][nx] == '#') ok = true;
    }
    if (!ok) ans = "No";
  }
  cout << ans << endl;
  return 0;
}
