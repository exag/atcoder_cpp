#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, k;
  cin >> n >> k;
  int ans = 0;
  while (n > 0) {
    n /= k;
    ans++;
  }
  cout << ans << endl;
  return 0;
}
