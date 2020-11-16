#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  cin >> n;
  vector<int> v(n);
  vector<int> c(n);
  rep(i, n) cin >> v[i];
  rep(i, n) cin >> c[i];
  int ans = 0;
  rep(i, n) {
    if (v[i] - c[i] > 0) ans += v[i] - c[i];
  }
  cout << ans << endl;
  return 0;
}
