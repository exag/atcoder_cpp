#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  int ans = 1e9;
  ans = min(ans, abs(a - b) + abs(b - c));
  ans = min(ans, abs(a - c) + abs(c - b));
  ans = min(ans, abs(b - c) + abs(c - a));
  ans = min(ans, abs(b - a) + abs(a - c));
  ans = min(ans, abs(c - a) + abs(a - b));
  ans = min(ans, abs(c - b) + abs(b - a));
  cout << ans << endl;
  return 0;
}
