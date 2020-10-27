#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  cin >> n;
  ll a = 0;
  ll b = 0;
  ll c = 0;
  rep(i, n) {
    ll x;
    cin >> x;
    x = abs(x);
    a += x;
    b += x * x;
    c = max(c, x);
  }
  double bb = sqrt(b);
  printf("%lld\n", a);
  printf("%.15f\n", bb);
  printf("%lld\n", c);
  return 0;
}
