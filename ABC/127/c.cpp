#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> a(n + 1);
  rep(i, m) {
    int l, r;
    cin >> l >> r;
    l--;
    r--;
    a[l] += 1;
    a[r + 1] -= 1;
  }
  vector<int> s(n + 1, 0);
  rep(i, n) a[i + 1] += a[i];
  int ans = 0;
  rep(i, n) {
    if (a[i] == m) ans++;
  }
  cout << ans << endl;
  return 0;
}
