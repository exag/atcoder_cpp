#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  while (a > 0 && c > 0) {
    if (a <= 0) break;
    c -= b;
    if (c <= 0) break;
    a -= d;
  }
  if (a > 0)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}
