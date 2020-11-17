#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int r;
  cin >> r;
  double ans = r * 2 * acos(-1);
  printf("%.10f\n", ans);
  return 0;
}
