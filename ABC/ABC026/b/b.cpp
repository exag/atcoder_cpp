#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  cin >> n;
  vector<int> r(n);
  rep(i, n) cin >> r[i];
  sort(r.rbegin(), r.rend());
  double ans = 0;
  double pi = 3.14;
  rep(i, n) {
    double rr = r[i] * r[i] * M_PI;
    if (i % 2 == 0) {
      ans += rr;
    } else {
      ans -= rr;
    }
  }
  printf("%.10f\n", ans);
  return 0;
}
