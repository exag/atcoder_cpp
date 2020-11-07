#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  cin >> n;
  vector<int> v(n);
  rep(i, n) cin >> v[i];
  sort(v.begin(), v.end());
  double ans;
  rep(i, n) {
    if (i == 0)
      ans = v[i];
    else
      ans = (ans + v[i]) / 2.0;
  }
  cout << ans << endl;
  return 0;
}
