#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define srep(i, s, n) for (int i = s; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  ll a, b, n;
  cin >> a >> b >> n;
  ll x = n;
  if (n >= b - 1) x = b - 1;
  ll ans = a * x / b - a * (x / b);
  cout << ans << endl;
  return 0;
}
