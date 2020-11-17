#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  ll m, x;
  m = 100;
  cin >> x;
  int y = 0;
  while (m < x) {
    m += m / 100;
    y++;
  }
  cout << y << endl;
  return 0;
}
