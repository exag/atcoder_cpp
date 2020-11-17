#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  cin >> n;
  vector<int> a(n + 1);
  vector<int> b(n);
  rep(i, n + 1) cin >> a[i];
  rep(i, n) cin >> b[i];
  ll ans = 0;
  rep(i, n) {
    int d1 = min(a[i], b[i]);
    a[i] -= d1;
    b[i] -= d1;
    int d2 = min(a[i + 1], b[i]);
    a[i + 1] -= d2;
    ans += (ll)d1;
    ans += (ll)d2;
  }
  cout << ans << endl;
  return 0;
}
