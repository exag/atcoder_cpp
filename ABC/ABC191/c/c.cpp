#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define srep(i, s, n) for (int i = s; i < (n); ++i)
#define chmax(x, y) x = max(x, y)
#define chmin(x, y) x = min(x, y)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int h, w;
  cin >> h >> w;
  vector<vector<char>> s(h, vector<char>(w));
  rep(i, h) rep(j, w) cin >> s[i][j];
  int ans = 0;
  rep(i, h - 1) rep(j, w - 1) {
    int cnt = 0;
    rep(di, 2) rep(dj, 2) {
      if (s[i + di][j + dj] == '#') cnt++;
    }
    if (cnt == 1 || cnt == 3) {
      ans++;
    }
  }
  cout << ans << endl;
  return 0;
}
