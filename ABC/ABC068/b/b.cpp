#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  cin >> n;
  auto f = [&](int x) {
    int cnt = 0;
    while (x % 2 == 0) {
      x /= 2;
      cnt++;
    }
    return cnt;
  };
  int mx = 0;
  int ans = 1;
  for (int i = 1; i <= n; ++i) {
    int cnt = f(i);
    if (cnt > mx) {
      mx = cnt;
      ans = i;
    }
  }
  cout << ans << endl;
  return 0;
}
