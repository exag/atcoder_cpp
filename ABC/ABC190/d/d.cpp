#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define srep(i, s, n) for (int i = s; i < (n); ++i)
#define chmax(x, y) x = max(x, y)
#define chmin(x, y) x = min(x, y)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  ll n;
  cin >> n;
  set<int> s;
  for (ll x = 1; x * x <= n; x++) {
    if (n % x == 0) {
      s.insert(x);
      s.insert(n / x);
    }
  }
  int cnt = 0;
  for (int x : s) {
    if (x % 2) cnt++;
  }
  cout << cnt * 2 << endl;
  return 0;
}
