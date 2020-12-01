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
  int dx[4] = {1, -1, 0, 0};
  int dy[4] = {0, 0, 1, -1};
  string ans = "Yes";
  rep(y, h) rep(x, w) {
    if (s[y][x] == '.') continue;
    bool found = false;
    rep(i, 4) {
      int nx = x + dx[i];
      int ny = y + dy[i];
      if (nx < 0 || nx >= w) continue;
      if (ny < 0 || ny >= h) continue;
      if (s[ny][nx] == '#') found = true;
    }
    if (!found) ans = "No";
  }
  cout << ans << endl;
  return 0;
}
