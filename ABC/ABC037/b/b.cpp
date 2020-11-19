#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, q;
  cin >> n >> q;
  vector<int> a(n);
  rep(i, q) {
    int l, r, t;
    cin >> l >> r >> t;
    l--;
    r--;
    for (int i = l; i <= r; ++i) a[i] = t;
  }
  rep(i, n) cout << a[i] << endl;
  return 0;
}
