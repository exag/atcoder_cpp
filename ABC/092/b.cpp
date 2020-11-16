#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, d, x;
  cin >> n >> d >> x;
  auto f = [&](int a) {
    int ret = 0;
    for (int i = 1; i <= d; i += a) ret++;
    return ret;
  };
  int ans = x;
  rep(i, n) {
    int a;
    cin >> a;
    ans += f(a);
  }
  cout << ans << endl;
  return 0;
}
