#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, m;
  cin >> n >> m;
  if (n >= 12) n -= 12;
  if (n == 0 && m == 0) {
    cout << 0 << endl;
    return 0;
  }
  double l = 0;
  if (m > 0) l = (360 * m) / 60.0;
  double s = 360 * (n * 60 + m) / 720.0;
  double d = abs(l - s);
  if (d > 180) d = 360 - d;
  printf("%.10f\n", d);
  return 0;
}
