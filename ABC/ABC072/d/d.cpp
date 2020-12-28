#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define srep(i, s, n) for (int i = s; i < (n); ++i)
#define chmax(x, y) x = max(x, y)
#define chmin(x, y) x = min(x, y)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  cin >> n;
  vector<int> p(n);
  rep(i, n) cin >> p[i];
  rep(i, n) p[i]--;
  int ans = 0;
  int cnt = 0;
  rep(i, n) {
    if (i == p[i]) {
      cnt++;
    } else {
      ans += (cnt + 1) / 2;
      cnt = 0;
    }
  }
  ans += (cnt + 1) / 2;
  cout << ans << endl;
  return 0;
}
