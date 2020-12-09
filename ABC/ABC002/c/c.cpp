#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int xa, ya, xb, yb, xc, yc;
  cin >> xa >> ya >> xb >> yb >> xc >> yc;
  xb -= xa;
  xc -= xa;
  yb -= ya;
  yc -= ya;
  double ans = abs(xb * yc - yb * xc) / 2.0;
  printf("%.10f\n", ans);
  return 0;
}
