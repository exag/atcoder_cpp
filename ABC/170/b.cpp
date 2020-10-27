#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int x, y;
  cin >> x >> y;
  rep(i, 101) {
    rep(j, 101) {
      if (i + j == x && i * 2 + j * 4 == y) {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }
  cout << "No" << endl;
  return 0;
}
