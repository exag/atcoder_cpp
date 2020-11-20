#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  vector<vector<string>> c(4, vector<string>(4));
  rep(y, 4) rep(x, 4) cin >> c[y][x];
  for (int y = 0; y < 4; ++y) {
    for (int x = 0; x < 4; ++x) {
      cout << c[3 - y][3 - x];
      if (x != 3) cout << " ";
    }
    cout << endl;
  }
  return 0;
}
