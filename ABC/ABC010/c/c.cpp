#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int txa, tya, txb, tyb, t, v, n;
  cin >> txa >> tya >> txb >> tyb >> t >> v >> n;
  string ans = "NO";
  rep(i, n) {
    int x, y;
    cin >> x >> y;
    int d1 = (txa - x) * (txa - x) + (tya - y) * (tya - y);
    int d2 = (txb - x) * (txb - x) + (tyb - y) * (tyb - y);
    double d = sqrt(d1) + sqrt(d2);
    if (t * v >= sqrt(d1) + sqrt(d2)) ans = "YES";
  }
  cout << ans << endl;
  return 0;
}
