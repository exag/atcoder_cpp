#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, d;
  cin >> n >> d;
  vector<vector<int>> x(n, vector<int>(d));
  rep(i, n) rep(j, d) cin >> x[i][j];
  int ans = 0;
  rep(i, n) rep(j, i) {  // j < i
    int sq = 0;
    rep(k, d) {
      int s = x[i][k] - x[j][k];
      sq += s * s;
    }
    if (sqrt(sq) == int(sqrt(sq))) ans++;
  }
  cout << ans << endl;
  return 0;
}
