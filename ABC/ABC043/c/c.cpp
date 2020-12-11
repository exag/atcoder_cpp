#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  int ans = 1000000000;
  for (int i = -100; i <= 100; ++i) {
    int cost = 0;
    rep(j, n) cost += (i - a[j]) * (i - a[j]);
    ans = min(ans, cost);
  }
  cout << ans << endl;
  return 0;
}
