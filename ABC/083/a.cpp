#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  int l = a + b;
  int r = c + d;
  string ans = "Balanced";
  if (l > r) ans = "Left";
  if (l < r) ans = "Right";
  cout << ans << endl;
  return 0;
}
