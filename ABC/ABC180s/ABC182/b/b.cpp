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
  int g = 0;
  int ans;
  for (int k = 2; k < 1002; ++k) {
    int p = 0;
    rep(i, n) if (a[i] % k == 0) p++;
    if (p > g) {
      ans = k;
      g = p;
    }
  }
  cout << ans << endl;
  return 0;
}
