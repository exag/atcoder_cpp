#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define repex(i, s, n) for (int i = s; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int l;
  cin >> l;
  ll ans = 1;
  repex(i, 1, 12) {
    ans *= (l - i);
    ans /= i;
  }
  cout << ans << endl;
  return 0;
}
