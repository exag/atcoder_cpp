#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define repex(i, s, n) for (int i = s; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

ll solve() {
  ll n, m;
  cin >> n >> m;
  if (n == 1 && m == 1) return 1;
  if (n == 1 && m > 1) return m - 2;
  if (n > 1 && m == 1) return n - 2;
  return (n - 2) * (m - 2);
}

int main() {
  cout << solve() << endl;
  return 0;
}
