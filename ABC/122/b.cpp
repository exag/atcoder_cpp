#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  string s;
  cin >> s;
  string ATCG = "ATCG";
  int ans = 0;
  int now = 0;
  rep(i, s.size()) {
    bool ok = false;
    for (char c : ATCG) {
      if (s[i] == c) ok = true;
    }
    if (ok)
      now++;
    else
      now = 0;
    ans = max(ans, now);
  }
  cout << ans << endl;
  return 0;
}
