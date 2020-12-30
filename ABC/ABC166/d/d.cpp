#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define srep(i, s, n) for (int i = s; i < (n); ++i)
#define chmax(x, y) x = max(x, y)
#define chmin(x, y) x = min(x, y)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  ll x;
  cin >> x;
  for (ll a = -3981; a < 3981; ++a) {
    for (ll b = -3981; b < 3981; ++b) {
      if ((a * a * a * a * a - b * b * b * b * b) == x) {
        cout << a << " " << b << endl;
        return 0;
      }
    }
  }
  return 0;
}
