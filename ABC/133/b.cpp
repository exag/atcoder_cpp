#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, d;
  cin >> n >> d;
  vector<vector<int>> x;
  rep(i, n) {
    vector<int> xd(d);
    rep(j, d) cin >> xd[j];
    x.push_back(xd);
  }
  int ans = 0;
  rep(i, n) rep(j, n) {
    if (i >= j) continue;
    int pd = 0;
    rep(k, d) pd += pow(abs(x[i][k] - x[j][k]), 2);
    if (sqrt(pd) == int(sqrt(pd))) ans++;
  }
  cout << ans << endl;
  return 0;
}
