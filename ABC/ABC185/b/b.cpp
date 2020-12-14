#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define repex(i, s, n) for (int i = s; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, m, t;
  cin >> n >> m >> t;
  int mx = n;
  int now = 0;
  rep(i, m) {
    int a, b;
    cin >> a >> b;
    n -= a - now;
    if (n <= 0) {
      cout << "No" << endl;
      return 0;
    }
    n = min(mx, n + b - a);
    now = b;
  }
  n -= t - now;
  if (n <= 0) {
    cout << "No" << endl;
  } else {
    cout << "Yes" << endl;
  }
  return 0;
}
