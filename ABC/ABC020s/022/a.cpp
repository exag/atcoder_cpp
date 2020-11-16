#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, s, t, w;
  cin >> n >> s >> t >> w;
  auto best = [&](int x) {
    if (s <= x && x <= t)
      return true;
    else
      return false;
  };
  int ans = 0;
  if (best(w)) ans++;
  rep(i, n - 1) {
    int a;
    cin >> a;
    w += a;
    if (best(w)) ans++;
  }
  cout << ans << endl;
  return 0;
}
