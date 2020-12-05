#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  ll n, t;
  cin >> n >> t;
  ll l = 0;
  ll r = t;
  int ans = 0;
  rep(i, n) {
    ll ti;
    cin >> ti;
    if (i == 0) continue;
    if (ti > r) {
      ans += r - l;
      l = ti;
    }
    r = ti + t;
  }
  ans += r - l;
  cout << ans << endl;
  return 0;
}
