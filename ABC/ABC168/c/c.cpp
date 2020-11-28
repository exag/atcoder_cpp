#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int a, b, h, m;
  cin >> a >> b >> h >> m;
  double l = 360 * m / 60.0;
  double s = 360 * (h * 60 + m) / 720.0;
  double d = abs(l - s);
  if (d > 180) d = 360 - d;
  double r = d * M_PI / 180.0;
  double ans = (a * a + b * b - 2 * a * b * cos(r));
  printf("%.20f\n", sqrt(ans));
  return 0;
}
