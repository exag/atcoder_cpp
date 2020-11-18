#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int h, w;
  cin >> h >> w;
  vector<string> s(h);
  vector<string> ans(h);
  rep(y, h) cin >> s[y];
  rep(y, h) rep(x, w) {
    if (s[y][x] == '#') {
      ans[y] += "#";
      continue;
    }
    int cnt = 0;
    for (int y2 = -1; y2 <= 1; ++y2) {
      for (int x2 = -1; x2 <= 1; ++x2) {
        if (y2 == 0 && x2 == 0) continue;
        int ny = y + y2;
        int nx = x + x2;
        if (ny < 0 || ny >= h) continue;
        if (nx < 0 || nx >= w) continue;
        if (s[ny][nx] == '#') cnt++;
      }
    }
    ans[y] += to_string(cnt);
  }
  rep(y, h) cout << ans[y] << endl;
  return 0;
}
