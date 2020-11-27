#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int c[3][3];
  rep(i, 3) rep(j, 3) cin >> c[i][j];
  string ans = "Yes";
  int d11 = c[0][0] - c[1][0];
  int d12 = c[1][0] - c[2][0];
  int d21 = c[0][1] - c[1][1];
  int d22 = c[1][1] - c[2][1];
  int d31 = c[0][2] - c[1][2];
  int d32 = c[1][2] - c[2][2];
  if (d11 != d21 || d21 != d31) ans = "No";
  if (d12 != d22 || d22 != d32) ans = "No";
  cout << ans << endl;
  return 0;
}
