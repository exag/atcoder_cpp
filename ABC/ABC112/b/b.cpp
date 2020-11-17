#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, t;
  cin >> n >> t;
  int ans = 1001;
  rep(i, n) {
    int ci, ti;
    cin >> ci >> ti;
    if (ti <= t) ans = min(ans, ci);
  }
  if (ans == 1001)
    cout << "TLE" << endl;
  else
    cout << ans << endl;
  return 0;
}
