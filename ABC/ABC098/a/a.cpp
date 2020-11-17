#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int a, b;
  cin >> a >> b;
  int ans = -1e9;
  ans = max(ans, a + b);
  ans = max(ans, a - b);
  ans = max(ans, a * b);
  cout << ans << endl;
  return 0;
}
