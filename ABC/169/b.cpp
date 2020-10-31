#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  cin >> n;
  ll ans = 1;
  ll inf = 1e18;
  vector<ll> a;
  rep(i, n) {
    ll an;
    cin >> an;
    if (an == 0) {
      cout << 0 << endl;
      return 0;
    }
    a.push_back(an);
  }
  rep(i, n) {
    if (a[i] > inf / ans) {
      cout << -1 << endl;
      return 0;
    }
    ans *= a[i];
  }
  cout << ans << endl;
  return 0;
}
