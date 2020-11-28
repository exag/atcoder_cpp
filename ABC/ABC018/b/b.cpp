#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  string s;
  int n;
  cin >> s >> n;
  rep(i, n) {
    int l, r;
    cin >> l >> r;
    l--;
    r--;
    int times = (r - l + 1) / 2;
    rep(j, times) {
      char nl = s[l + j];
      char nr = s[r - j];
      s[l + j] = nr;
      s[r - j] = nl;
    }
  }
  cout << s << endl;
  return 0;
}
