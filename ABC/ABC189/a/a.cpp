#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define srep(i, s, n) for (int i = s; i < (n); ++i)
#define chmax(x, y) x = max(x, y)
#define chmin(x, y) x = min(x, y)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  char c1, c2, c3;
  cin >> c1 >> c2 >> c3;
  if (c1 == c2 && c2 == c3) {
    cout << "Won" << endl;
  } else {
    cout << "Lost" << endl;
  }
  return 0;
}
