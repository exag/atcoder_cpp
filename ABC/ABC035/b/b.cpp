#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  string s;
  int t;
  cin >> s >> t;
  int miss = 0;
  int x = 0;
  int y = 0;
  rep(i, s.size()) {
    if (s[i] == '?') miss++;
    if (s[i] == 'L') x--;
    if (s[i] == 'R') x++;
    if (s[i] == 'U') y++;
    if (s[i] == 'D') y--;
  }
  int dist = abs(x) + abs(y);
  int ans;
  if (t == 1) {
    ans = dist + miss;
  } else {
    if (dist >= miss) {
      ans = dist - miss;
    } else {
      int m = dist - miss;
      if (m % 2 == 0) {
        ans = 0;
      } else {
        ans = 1;
      }
    }
  }
  cout << ans << endl;
  return 0;
}
