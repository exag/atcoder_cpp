#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  ll n, t;
  cin >> n >> t;
  vector<ll> a(2000005);
  rep(i, n) {
    ll ai;
    cin >> ai;
    a[ai] += 1;
    a[ai + t] -= 1;
  }
  int ans = 0;
  rep(i, 2000005) {
    a[i + 1] += a[i];
    if (a[i + 1] > 0) ans++;
  }
  cout << ans << endl;
  return 0;
}
