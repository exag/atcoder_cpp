#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int w, a, b;
  cin >> w >> a >> b;
  if (a + w < b) {
    cout << b - a - w << endl;
    return 0;
  }
  if (b + w < a) {
    cout << a - b - w << endl;
    return 0;
  }
  cout << 0 << endl;
  return 0;
}
