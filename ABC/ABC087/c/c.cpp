#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  cin >> n;
  vector<int> a1(n);
  vector<int> a2(n);
  rep(i, n) cin >> a1[i];
  rep(i, n) cin >> a2[i];
  int ans = 0;
  rep(i, n) {
    int now = 0;
    for (int j = 0; j <= i; ++j) now += a1[j];
    for (int j = i; j < n; ++j) now += a2[j];
    ans = max(ans, now);
  }
  cout << ans << endl;
  return 0;
}
