#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  string s;
  cin >> s;
  int len = s.size();
  int ans = len;
  int cnt = 0;
  rep(i, len) {
    if (i % 2 == s[i] - '0') cnt++;
  }
  ans = min(ans, cnt);
  cnt = 0;
  rep(i, len) {
    if (i % 2 != s[i] - '0') cnt++;
  }
  ans = min(ans, cnt);
  cout << ans << endl;
  return 0;
}
