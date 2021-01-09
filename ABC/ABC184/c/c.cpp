#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define srep(i, s, n) for (int i = s; i < (n); ++i)
#define chmax(x, y) x = max(x, y)
#define chmin(x, y) x = min(x, y)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int solve(int x, int y) {
  // 0
  if (0 == x && 0 == y) return 0;
  // 1
  if (0 == x + y) return 1;
  if (0 == x - y) return 1;
  if (abs(x) + abs(y) <= 3) return 1;
  // 2
  if (0 == (x + y) % 2) return 2;
  if (abs(x) + abs(y) <= 6) return 2;
  if (abs((x + y)) <= 3) return 2;
  if (abs((x - y)) <= 3) return 2;
  return 3;
}

int main() {
  int x1, y1, x2, y2;
  cin >> x1 >> y1 >> x2 >> y2;
  cout << solve(x2 - x1, y2 - y1) << endl;
  return 0;
}
