#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  cin >> n;
  vector<int> h(n);
  rep(i, n) cin >> h[i];
  int now = 0;
  int ans = 0;
  rep(i, n) {
    if (h[i] >= now) {
      ans++;
      now = h[i];
    }
  }
  cout << ans << endl;
  return 0;
}
