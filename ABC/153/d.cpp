#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  ll h;
  cin >> h;
  ll n = 1;
  ll cnt = 0;
  while (h > 1) {
    cnt += n;
    h /= 2;
    n *= 2;
  }
  ll ans = cnt + n;
  cout << ans << endl;
  return 0;
}
