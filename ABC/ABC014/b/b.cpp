#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, x;
  cin >> n >> x;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  int ans = 0;
  rep(i, n) {
    if (x >> i & 1) ans += a[i];
  }
  cout << ans << endl;
  return 0;
}
