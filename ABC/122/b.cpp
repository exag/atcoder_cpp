#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  string s;
  cin >> s;
  int ans = 0;
  rep(i, s.size()) {
    for (int l = 1; l <= s.size() - i; ++l) {
      string sub = s.substr(i, l);
      bool ok = true;
      for (char c : sub) {
        if (c != 'A' && c != 'C' && c != 'G' && c != 'T') ok = false;
      }
      if (ok) ans = max(ans, l);
    }
  }
  cout << ans << endl;
  return 0;
}
