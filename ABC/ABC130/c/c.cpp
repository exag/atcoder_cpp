#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  ll w, h, x, y;
  cin >> w >> h >> x >> y;
  double ans1 = (w * h) / 2.0;
  int ans2 = 0;
  if (w == x * 2 && h == y * 2) ans2 = 1;
  printf("%.10f %d\n", ans1, ans2);
  return 0;
}
