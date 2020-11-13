#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  string ans;
  if (b * c > a * d) ans = "TAKAHASHI";
  if (b * c < a * d) ans = "AOKI";
  if (b * c == a * d) ans = "DRAW";
  cout << ans << endl;
  return 0;
}
