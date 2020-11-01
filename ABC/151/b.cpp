#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, k, m;
  cin >> n >> k >> m;
  int sm = 0;
  rep(i, n - 1) {
    int a;
    cin >> a;
    sm += a;
  }
  int ans = m * n - sm;
  if (ans < 0) ans = 0;
  if (ans > k)
    cout << -1 << endl;
  else
    cout << ans << endl;
  return 0;
}
