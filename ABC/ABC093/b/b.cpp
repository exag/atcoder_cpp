#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int a, b, k;
  cin >> a >> b >> k;
  set<int> s;
  rep(i, k) {
    int n = a + i;
    if (n > b) break;
    s.insert(n);
  }
  rep(i, k) {
    int n = b - i;
    if (n < a) break;
    s.insert(n);
  }
  for (auto ans : s) cout << ans << endl;
  return 0;
}
