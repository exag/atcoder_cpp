#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  int n = 0;
  if (a + b == c) n += 1;
  if (a - b == c) n += 2;
  string ans;
  if (n == 0) ans = "!";
  if (n == 1) ans = "+";
  if (n == 2) ans = "-";
  if (n == 3) ans = "?";
  cout << ans << endl;
  return 0;
}
