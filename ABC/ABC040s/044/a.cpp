#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, k, x, y;
  cin >> n >> k >> x >> y;
  if (n < k) k = n;
  int ans = x * k + (n - k) * y;
  cout << ans << endl;
  return 0;
}
