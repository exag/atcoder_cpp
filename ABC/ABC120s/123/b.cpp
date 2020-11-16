#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  vector<int> a(5);
  rep(i, 5) cin >> a[i];
  int ans = 1000;
  do {
    int t = 0;
    rep(i, 4) t += ((a[i] + 9) / 10) * 10;
    t += a[4];
    ans = min(ans, t);
  } while (next_permutation(a.begin(), a.end()));
  cout << ans << endl;
  return 0;
}
