#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  ll sm = 0;
  rep(i, n) {
    int ai;
    cin >> ai;
    sm += ai;
    a[i] = ai;
  }
  ll snuke = 0;
  ll ans = 1e18;
  rep(i, n - 1) {
    snuke += a[i];
    ans = min(ans, abs(snuke * 2 - sm));
  }
  cout << ans << endl;
  return 0;
}
