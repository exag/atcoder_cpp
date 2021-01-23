#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define srep(i, s, n) for (int i = s; i < (n); ++i)
#define chmax(x, y) x = max(x, y)
#define chmin(x, y) x = min(x, y)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, x;
  cin >> n >> x;
  x *= 100;
  rep(i, n) {
    int v, p;
    cin >> v >> p;
    x -= v * p;
    if (x < 0) {
      cout << i + 1 << endl;
      return 0;
    }
  }
  cout << -1 << endl;
  return 0;
}
