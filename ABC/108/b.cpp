#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int x1, y1, x2, y2;
  cin >> x1 >> y1 >> x2 >> y2;
  int dx = x2 - x1;
  int dy = y2 - y1;
  cout << x2 - dy << endl;
  cout << y2 + dx << endl;
  cout << x1 - dy << endl;
  cout << y1 + dx << endl;
  return 0;
}
