#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define srep(i, s, n) for (int i = s; i < (n); ++i)
#define chmax(x, y) x = max(x, y)
#define chmin(x, y) x = min(x, y)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  if (c == 0) {
    if (a > b) {
      cout << "Takahashi" << endl;
    } else {
      cout << "Aoki" << endl;
    }
  } else {
    if (a < b) {
      cout << "Aoki" << endl;
    } else {
      cout << "Takahashi" << endl;
    }
  }
  return 0;
}
