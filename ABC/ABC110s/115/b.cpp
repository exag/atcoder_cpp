#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  cin >> n;
  int sm = 0;
  int mx = 0;
  rep(i, n) {
    int p;
    cin >> p;
    sm += p;
    mx = max(mx, p);
  }
  int ans = 0;
  ans += sm;
  ans -= mx / 2;
  cout << ans << endl;
  return 0;
}
