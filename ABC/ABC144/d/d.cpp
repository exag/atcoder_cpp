#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define srep(i, s, n) for (int i = s; i < (n); ++i)
#define chmax(x, y) x = max(x, y)
#define chmin(x, y) x = min(x, y)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  double a, b, x;
  cin >> a >> b >> x;
  double s = x / a;
  double rad;
  if (s >= a * b / 2) {
    double h = (a * b - s) * 2 / a;
    rad = atan2(h, a);
  } else {
    double w = s * 2 / b;
    rad = atan2(b, w);
  }
  double PI = acos(-1);  // M_PI でもOK
  double deg = rad / (2 * PI) * 360;
  printf("%.10f\n", deg);
  return 0;
}
