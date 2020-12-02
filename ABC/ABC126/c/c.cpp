#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, k;
  cin >> n >> k;
  auto f = [&](int x) {
    int ans = 0;
    while (x < k) {
      x *= 2;
      ans++;
    }
    return ans;
  };
  double ans = 0;
  for (int i = 1; i <= n; i++) {
    ans += 1 / pow(2, f(i));
  }
  ans /= n;
  printf("%.12f\n", ans);
  return 0;
}
