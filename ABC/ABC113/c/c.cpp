#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define srep(i, s, n) for (int i = s; i < (n); ++i)
#define chmax(x, y) x = max(x, y)
#define chmin(x, y) x = min(x, y)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> p(m), y(m);
  rep(i, m) cin >> p[i] >> y[i];
  map<int, set<int>> mp;
  rep(i, m) mp[p[i]].insert(y[i]);
  map<int, P> ans;
  for (auto x : mp) {
    int idx = 1;
    for (int y : x.second) {
      ans[y] = make_pair(x.first, idx);
      idx++;
    }
  }
  rep(i, m) printf("%06d%06d\n", ans[y[i]].first, ans[y[i]].second);
  return 0;
}
