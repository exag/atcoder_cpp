#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  int ans = 1e9;
  ans = min(ans, a + b);
  ans = min(ans, b + c);
  ans = min(ans, c + a);
  cout << ans << endl;
  return 0;
}
