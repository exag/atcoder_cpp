#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  cin >> n;
  vector<string> s(n);
  rep(i, n) cin >> s[i];
  vector<int> cnt(26);
  rep(i, 26) {
    int mn = 100;
    rep(j, n) {
      int now = count(s[j].begin(), s[j].end(), 'a' + i);
      mn = min(mn, now);
    }
    cnt[i] = mn;
  }
  rep(i, 26) cout << string(cnt[i], 'a' + i);
  cout << endl;
  return 0;
}
