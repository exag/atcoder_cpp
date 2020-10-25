#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  cin >> n;
  int odd = n - n / 2;
  double ans = (double)odd / n;
  printf("%.10f\n", ans);
  return 0;
}
