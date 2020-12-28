#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define srep(i, s, n) for (int i = s; i < (n); ++i)
#define chmax(x, y) x = max(x, y)
#define chmin(x, y) x = min(x, y)
using namespace std;
using ll = long long;
using P = pair<int, int>;

/*
DP
例えば K=3 のとき
1, 4, 7, ...回目
2, 5, 8, ...回目
3, 6, 9, ...回目
の結果は独立して考えることができる。

mod K によってK個のグループに分けて、各グループでDPする。
ここからはDPコンテストのCとほぼ同じ。

・出した手
・その手での最大リターン
を保持しておく。
*/
int main() {
  int N, K, R, S, P;
  string T;
  cin >> N >> K >> R >> S >> P >> T;
  vector<vector<int>> g(K);
  rep(i, N) {
    if (T[i] == 'r') g[i % K].push_back(0);
    if (T[i] == 's') g[i % K].push_back(1);
    if (T[i] == 'p') g[i % K].push_back(2);
  }
  auto f = [&](int me, int cp) {
    if (me == 2 && cp == 0) return P;
    if (me == 0 && cp == 1) return R;
    if (me == 1 && cp == 2) return S;
    return 0;
  };
  int ans = 0;
  rep(gi, K) {
    int l = g[gi].size();
    vector<vector<int>> dp(l + 1, vector<int>(3));
    rep(i, l) {
      rep(j, 3) {
        rep(k, 3) {
          if (j == k) continue;
          dp[i + 1][k] = chmax(dp[i + 1][k], dp[i][j] + f(k, g[gi][i]));
        }
      }
    }
    int mx = 0;
    rep(i, 3) chmax(mx, dp[l][i]);
    ans += mx;
  }
  cout << ans << endl;
  return 0;
}
