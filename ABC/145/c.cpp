#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int factorial(int n) {
  if (n > 0) {
    return n * factorial(n - 1);
  } else {
    return 1;
  }
}

int main() {
  int n;
  cin >> n;
  vector<int> x(n), y(n);
  rep(i, n) cin >> x[i] >> y[i];
  vector<int> p(n);
  rep(i, n) p[i] = i;
  double ans = 0;
  do {
    rep(i, n - 1) {
      int dx = x[p[i]] - x[p[i + 1]];
      int dy = y[p[i]] - y[p[i + 1]];
      double dist = dx * dx + dy * dy;
      ans += sqrt(dist);
    }
  } while (next_permutation(p.begin(), p.end()));
  printf("%.10f\n", ans / factorial(n));
  return 0;
}
