#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  cin >> n;
  int now = 0;
  int ans = 0;
  rep(i, n) {
    int h;
    cin >> h;
    if (h > now) ans += h - now;
    now = h;
  }
  cout << ans << endl;
  return 0;
}
