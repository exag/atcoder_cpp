#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define srep(i, s, n) for (int i = s; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;
template <class T>
void chmax(T& a, T b) {
  if (a < b) a = b;
}
template <class T>
void chmin(T& a, T b) {
  if (a > b) a = b;
}
const ll INF = 1LL << 60;

int main() {
  int n;
  cin >> n;
  vector<int> h(n);
  rep(i, n) cin >> h[i];
  vector<ll> dp(n, INF);
  dp[0] = 0;
  srep(i, 1, n) {
    chmin(dp[i], dp[i - 1] + abs(h[i] - h[i - 1]));
    if (i > 1) {
      chmin(dp[i], dp[i - 2] + abs(h[i] - h[i - 2]));
    }
  }
  cout << dp[n - 1] << endl;
  return 0;
}
