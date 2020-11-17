#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int a, b, n;
  cin >> a >> b >> n;
  int d = lcm(a, b);
  int ans = ((n + d - 1) / d) * d;
  cout << ans << endl;
  return 0;
}
