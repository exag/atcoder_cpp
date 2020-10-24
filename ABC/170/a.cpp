#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int x1, x2, x3, x4, x5;
  cin >> x1 >> x2 >> x3 >> x4 >> x5;
  vector<int> x;
  x = {x1, x2, x3, x4, x5};
  rep(i, 5) {
    if (x[i] == 0) cout << i + 1 << endl;
  }
  return 0;
}
