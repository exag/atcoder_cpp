#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define repex(i, s, n) for (int i = s; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int a[2020][2020];

int main() {
  int l, r;
  cin >> l >> r;
  rep(i, 2020) rep(j, 2020) a[i][j] = -1;
  auto calc = [&]() {
    repex(j, l, r + 1) {
      repex(i, l, j) {
        int mi = i % 2019;
        int mj = j % 2019;
        if (a[mi][mj] != -1) return;
        a[mi][mj] = mi * mj % 2019;
      }
    }
  };
  calc();
  int ans = 2020 * 2020;
  rep(i, 2020) rep(j, 2020) {
    if (a[i][j] != -1) {
      ans = min(ans, a[i][j]);
    }
  }
  cout << ans << endl;
  return 0;
}
