#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, m;
  cin >> n >> m;
  int ans = 1000;
  vector<int> s(m);
  vector<char> c(m);
  rep(i, m) cin >> s[i] >> c[i];
  int st = pow(10, n - 1);
  if (n == 1) st = 0;
  int ed = pow(10, n) - 1;
  for (int i = st; i <= ed; ++i) {
    string sn = to_string(i);
    bool ok = true;
    rep(j, m) {
      if (sn[s[j] - 1] != c[j]) ok = false;
    }
    if (ok) ans = min(ans, i);
  }
  if (ans == 1000) ans = -1;
  cout << ans << endl;
  return 0;
}
