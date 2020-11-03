#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  cin >> n;
  vector<int> w(n);
  rep(i, n) cin >> w[i];
  int s = 0;
  rep(i, n) s += w[i];
  int a = 0;
  int ans = 1e9;
  rep(i, n) {
    a += w[i];
    ans = min(ans, abs(a * 2 - s));
  }
  cout << ans << endl;
  return 0;
}
