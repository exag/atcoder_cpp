#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int x, y, z;
  cin >> x >> y >> z;
  int ans = (x - z) / (y + z);
  cout << ans << endl;
  return 0;
}
