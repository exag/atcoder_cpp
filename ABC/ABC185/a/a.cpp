#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define repex(i, s, n) for (int i = s; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int a1, a2, a3, a4;
  cin >> a1 >> a2 >> a3 >> a4;
  int ans = min(a1, a2);
  ans = min(ans, a3);
  ans = min(ans, a4);
  cout << ans << endl;
  return 0;
}
