#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int h, w;
  cin >> h >> w;
  vector<string> a(h);
  rep(i, h) cin >> a[i];
  vector<bool> r(h, false);
  vector<bool> c(w, false);
  rep(i, h) {
    rep(j, w) {
      if (a[i][j] == '#') {
        r[i] = true;
        c[j] = true;
      }
    }
  }
  rep(i, h) {
    if (!r[i]) continue;
    rep(j, w) {
      if (!c[j]) continue;
      cout << a[i][j];
    }
    cout << endl;
  }
  return 0;
}
