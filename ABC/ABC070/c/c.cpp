#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  cin >> n;
  ll ans = 1;
  rep(i, n) {
    ll t;
    cin >> t;
    ans = lcm(ans, t);
  }
  cout << ans << endl;
  return 0;
}
