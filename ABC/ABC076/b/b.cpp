#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, k;
  cin >> n >> k;
  int ans = 1e9;
  rep(a, n + 1) {
    int tmp = 1;
    rep(i, a) tmp *= 2;
    tmp += k * (n - a);
    ans = min(ans, tmp);
  }
  cout << ans << endl;
  return 0;
}
