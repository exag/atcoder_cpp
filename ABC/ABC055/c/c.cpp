#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

ll solve() {
  ll s, c;
  cin >> s >> c;
  if (2 * s >= c) return c / 2;
  c -= 2 * s;
  return s + c / 4;
}

int main() {
  cout << solve() << endl;
  return 0;
}
