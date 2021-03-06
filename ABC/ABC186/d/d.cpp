#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define srep(i, s, n) for (int i = s; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  cin >> n;
  vector<ll> a(n);
  rep(i, n) cin >> a[i];
  ll ans = 0;
  sort(a.begin(), a.end());
  rep(i, n) {
    ans += i * a[i];
    ans -= (n - i - 1) * a[i];
  }
  cout << ans << endl;
  return 0;
}
