#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define srep(i, s, n) for (int i = s; i < (n); ++i)
#define chmax(x, y) x = max(x, y)
#define chmin(x, y) x = min(x, y)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int solve() {
  int x1, y1, x2, y2;
  cin >> x1 >> y1 >> x2 >> y2;
  // 0
  if (x1 == x2 && y1 == y2) return 0;
  // 1
  if (x1 + y1 == x2 + y2) return 1;
  if (x1 - y1 == x2 - y2) return 1;
  if (abs(x1 - x2) + abs(y1 - y2) <= 3) return 1;
  // 2
  if ((x1 + y1) % 2 == (x2 + y2) % 2) return 2;
  if (abs(x1 - x2) + abs(y1 - y2) <= 6) return 2;
  if (abs((x1 + y1) - (x2 + y2)) <= 3) return 2;
  if (abs((x1 - y1) - (x2 - y2)) <= 3) return 2;
  return 3;
}

int main() {
  cout << solve() << endl;
  return 0;
}
