#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define srep(i, s, n) for (int i = s; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

double f(double x) {
  double ret;
  ret = x * (x + 1) / 2.0;
  ret /= x;
  return ret;
}

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> p(n);
  rep(i, n) cin >> p[i];
  vector<double> e(n);
  rep(i, n) e[i] = f(p[i]);
  double now = 0;
  rep(i, k) now += e[i];
  double ans = now;
  srep(i, 1, n - k + 1) {
    now -= e[i - 1];
    now += e[i + k - 1];
    ans = max(ans, now);
  }
  printf("%.10f\n", ans);
  return 0;
}
