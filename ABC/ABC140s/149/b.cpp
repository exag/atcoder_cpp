#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  ll a, b, k;
  cin >> a >> b >> k;
  ll eat = 0;
  if (a > 0) {
    eat = min(a, k);
    a -= eat;
    k -= eat;
  }
  if (k > 0 && b > 0) {
    eat = min(b, k);
    b -= eat;
  }
  cout << a << " " << b << endl;
  return 0;
}
