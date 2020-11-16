#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int r, d, x;
  cin >> r >> d >> x;
  rep(i, 10) {
    cout << r * x - d << endl;
    x = r * x - d;
  }
  return 0;
}
