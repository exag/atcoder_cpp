#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int f(int n) {
  set<int> s;
  for (ll x = 1; x * x <= n; x++) {
    if (n % x == 0) {
      s.insert(x);
      s.insert(n / x);
    }
  }
  return s.size();
}

int main() {
  int n;
  cin >> n;
  int ans = 0;
  for (int i = 1; i <= n; i += 2) {
    if (f(i) == 8) ans++;
  }
  cout << ans << endl;
  return 0;
}
