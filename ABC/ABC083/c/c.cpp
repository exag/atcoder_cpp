#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  ll x, y;
  cin >> x >> y;
  int ans = 1;
  while (x * 2 <= y) {
    x *= 2;
    ans++;
  }
  cout << ans << endl;
  return 0;
}
