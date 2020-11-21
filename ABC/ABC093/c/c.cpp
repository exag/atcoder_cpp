#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  int mx = max(a, max(b, c));
  int diff = mx * 3 - (a + b + c);
  if (diff % 2 != 0) diff += 3;
  cout << diff / 2 << endl;
  return 0;
}
