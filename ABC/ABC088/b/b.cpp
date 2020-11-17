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
  sort(a.rbegin(), a.rend());
  int ans = 0;
  rep(i, n) {
    if (i % 2 == 0)
      ans += a[i];
    else
      ans -= a[i];
  }
  cout << ans << endl;
  return 0;
}
