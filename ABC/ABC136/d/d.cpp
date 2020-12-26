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
  cin >> s;
  n = s.size();
  vector<int> ans(n);
  rep(ri, 2) {
    int cnt = 0;
    rep(i, n) {
      if (s[i] == 'R')
        cnt++;
      else {
        ans[i] += cnt / 2;
        ans[i - 1] += (cnt + 1) / 2;
        cnt = 0;
      }
    }
    reverse(ans.begin(), ans.end());
    reverse(s.begin(), s.end());
    rep(i, n) {
      if (s[i] == 'L')
        s[i] = 'R';
      else
        s[i] = 'L';
    }
  }
  rep(i, n) cout << ans[i] << endl;
  return 0;
}
