#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  cin >> n;
  int ans = 0;
  for (int c = 1; c < n; ++c) {
    for (int x = 1; x * x <= c; ++x) {
      if (c % x == 0) {
        if (x * x == c)
          ans += 1;
        else
          ans += 2;
      }
    }
  }
  cout << ans << endl;
  return 0;
}
