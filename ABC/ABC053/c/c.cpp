#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

ll solve() {
  ll x;
  cin >> x;
  ll ans = (x / 11) * 2;
  x %= 11;
  if (x == 0) return ans;
  if (x <= 6) return ans + 1;
  return ans + 2;
}

int main() {
  cout << solve() << endl;
  return 0;
}
