#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  cin >> n;
  int ans = 110000;
  for (int h = 1; h <= n; ++h) {
    int w = n / h;
    int d = h * w;
    ans = min(ans, abs(h - w) + n - d);
  }
  cout << ans << endl;
  return 0;
}
