#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, k;
  cin >> n >> k;
  vector<vector<int>> t(n, vector<int>(n));
  rep(i, n) rep(j, n) cin >> t[i][j];
  vector<int> v(n - 1);
  rep(i, n - 1) v[i] = i + 1;
  int ans = 0;
  do {
    int tmp = t[0][v[0]];
    rep(i, v.size() - 1) { tmp += t[v[i]][v[i + 1]]; }
    tmp += t[v.back()][0];
    if (tmp == k) ans++;
  } while (next_permutation(v.begin(), v.end()));
  cout << ans << endl;
  return 0;
}
