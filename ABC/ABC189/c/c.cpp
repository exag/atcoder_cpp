#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define srep(i, s, n) for (int i = s; i < (n); ++i)
#define chmax(x, y) x = max(x, y)
#define chmin(x, y) x = min(x, y)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n = 0;
  cin >> n;
  vector<int> a(n + 1);
  int ans = 0;
  rep(i, n) cin >> a[i];
  rep(l, n) {
    int x = a[l];
    srep(r, l, n) {
      chmin(x, a[r]);
      chmax(ans, x * (r - l + 1));
    }
  }
  cout << ans << endl;
  return 0;
}
