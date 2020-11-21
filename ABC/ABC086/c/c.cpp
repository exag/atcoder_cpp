#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  cin >> n;
  int nt = 0;
  int nx = 0;
  int ny = 0;
  rep(i, n) {
    int t, x, y;
    cin >> t >> x >> y;
    int dist = abs(x - nx) + abs(y - ny);
    if ((t - nt) % 2 != dist % 2) {
      cout << "No" << endl;
      return 0;
    }
    if (t - nt < dist) {
      cout << "No" << endl;
      return 0;
    }
    nt = t;
    nx = x;
    ny = y;
  }
  cout << "Yes" << endl;
  return 0;
}
