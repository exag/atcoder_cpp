#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  cin >> n;
  int ans = 1000;
  rep(i, n) {
    int t;
    cin >> t;
    ans = min(ans, t);
  }
  cout << ans << endl;
  return 0;
}
