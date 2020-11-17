#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int x, n;
  cin >> x >> n;
  int d = 1000;
  vector<int> p(n);
  rep(i, n) cin >> p[i];
  int ans;
  for (int i = x + 100; i >= x - 100; --i) {
    if (find(p.begin(), p.end(), i) != p.end()) continue;
    if (abs(x - i) <= d) {
      d = abs(x - i);
      ans = i;
    }
  }
  cout << ans << endl;
  return 0;
}
