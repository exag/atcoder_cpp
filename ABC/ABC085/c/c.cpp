#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, y;
  cin >> n >> y;
  rep(i, n + 1) {
    rep(j, n + 1) {
      int k = n - i - j;
      if (k < 0) continue;
      int o = i * 10000 + j * 5000 + k * 1000;
      if (o == y) {
        cout << i << " " << j << " " << k << endl;
        return 0;
      }
    }
  }
  cout << -1 << " " << -1 << " " << -1 << endl;
  return 0;
}
