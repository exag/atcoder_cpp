#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> a(n);
  vector<int> b(n);
  vector<int> c(m);
  vector<int> d(m);
  rep(i, n) cin >> a[i] >> b[i];
  rep(i, m) cin >> c[i] >> d[i];
  rep(i, n) {
    int mn = 1100000000;
    int ans;
    rep(j, m) {
      int dist = abs(a[i] - c[j]) + abs(b[i] - d[j]);
      if (dist < mn) {
        ans = j + 1;
        mn = dist;
      }
    }
    cout << ans << endl;
  }
  return 0;
}
