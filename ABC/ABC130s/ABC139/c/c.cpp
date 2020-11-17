#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  cin >> n;
  int ans = 0;
  int cnt = 0;
  vector<int> h(n);
  rep(i, n) cin >> h[i];
  rep(i, n - 1) {
    if (h[i + 1] <= h[i]) {
      cnt++;
    } else {
      ans = max(ans, cnt);
      cnt = 0;
    }
  }
  if (cnt > 0) ans = max(ans, cnt);
  cout << ans << endl;
  return 0;
}
