#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  string s;
  cin >> s;
  int len = s.size();
  vector<int> n(len);
  rep(i, len) n[i] = (s[i] - '0') % 3;
  int sm = 0;
  rep(i, len) sm += n[i];
  sm %= 3;
  if (sm == 0) {
    cout << 0 << endl;
    return 0;
  }
  int cnt1 = 0;
  int cnt2 = 0;
  rep(i, len) {
    if (n[i] == 1) cnt1++;
    if (n[i] == 2) cnt2++;
  }
  int cnt = abs(cnt1 - cnt2);
  cnt1 %= 3;
  cnt2 %= 3;
  cnt = min(cnt, abs(cnt1 - cnt2));
  if (cnt >= len)
    cout << -1 << endl;
  else
    cout << cnt << endl;
  return 0;
}
