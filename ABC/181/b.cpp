#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  ll n;
  cin >> n;
  ll ans = 0;
  rep(i, n) {
    ll a, b;
    cin >> a >> b;
    ans += (a + b) * (b - a + 1) / 2;
  }
  cout << ans << endl;
  return 0;
}
