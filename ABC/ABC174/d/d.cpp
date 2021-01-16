#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define srep(i, s, n) for (int i = s; i < (n); ++i)
#define chmax(x, y) x = max(x, y)
#define chmin(x, y) x = min(x, y)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  string s;
  cin >> n >> s;

  auto get_wi = [&](int si) {
    for (int i = si; i < n; i++) {
      if (s[i] == 'W') return i;
    }
    return n;
  };
  auto get_ri = [&](int si) {
    for (int i = si; i >= 0; i--) {
      if (s[i] == 'R') return i;
    }
    return -1;
  };
  int wi = 0;
  int ri = n - 1;
  int ans = 0;
  while (true) {
    wi = get_wi(wi);
    ri = get_ri(ri);
    if (ri < wi) break;
    s[wi] = 'R';
    s[ri] = 'W';
    ans++;
  }
  cout << ans << endl;
  return 0;
}
