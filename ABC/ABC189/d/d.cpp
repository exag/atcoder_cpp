#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define srep(i, s, n) for (int i = s; i < (n); ++i)
#define chmax(x, y) x = max(x, y)
#define chmin(x, y) x = min(x, y)
using namespace std;
using ll = long long;
using P = pair<int, int>;

ll dp[61][2];

int main() {
  int n = 0;
  cin >> n;
  vector<string> s(n);
  rep(i, n) cin >> s[i];
  dp[false][false] = 1;
  dp[0][true] = 1;
  rep(i, n) {
    if (s[i] == "AND") {
      // select false
      dp[i + 1][false] += dp[i][false];
      dp[i + 1][false] += dp[i][true];
      // select true
      dp[i + 1][false] += dp[i][false];
      dp[i + 1][true] += dp[i][true];
    } else {
      // select false
      dp[i + 1][false] += dp[i][false];
      dp[i + 1][true] += dp[i][true];
      // select true
      dp[i + 1][true] += dp[i][false];
      dp[i + 1][true] += dp[i][true];
    }
  }
  cout << dp[n][true] << endl;
  return 0;
}
