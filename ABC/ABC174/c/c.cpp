#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define srep(i, s, n) for (int i = s; i < (n); ++i)
#define chmax(x, y) x = max(x, y)
#define chmin(x, y) x = min(x, y)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int k;
  cin >> k;
  int x = 7 % k;
  for (int i = 1; i <= k; ++i) {
    if (x == 0) {
      cout << i << endl;
      return 0;
    }
    x = (x * 10 + 7) % k;
  }
  cout << -1 << endl;
  return 0;
}
