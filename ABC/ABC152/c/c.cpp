#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  cin >> n;
  int ans = 0;
  int mn = 1e9;
  rep(i, n) {
    int p;
    cin >> p;
    if (p <= mn) ans++;
    mn = min(mn, p);
  }
  cout << ans << endl;
  return 0;
}
