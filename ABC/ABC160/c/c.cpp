#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int k, n;
  cin >> k >> n;
  vector<int> a(n * 2);
  rep(i, n) cin >> a[i];
  rep(i, n) {
    int ai = a[i];
    a[i + n] = a[i] + k;
  }
  int ans = 1e9;
  rep(i, n) ans = min(ans, a[i + n - 1] - a[i]);
  cout << ans << endl;
  return 0;
}
