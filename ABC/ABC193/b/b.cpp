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
  const int INF = 1001001001;
  int ans = INF;
  rep(i, n) {
    int a, p, x;
    cin >> a >> p >> x;
    if (a < x) chmin(ans, p);
  }
  if (ans == INF) ans = -1;
  cout << ans << endl;
  return 0;
}
