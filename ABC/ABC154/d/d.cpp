#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define srep(i, s, n) for (int i = s; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> e(n);
  rep(i, n) {
    int p;
    cin >> p;
    // 期待値を2倍しておく
    e[i] = p + 1;
  }
  int now = 0;
  rep(i, k) now += e[i];
  int ans = now;
  srep(i, 1, n - k + 1) {
    now -= e[i - 1];
    now += e[i + k - 1];
    ans = max(ans, now);
  }
  printf("%.10f\n", ans / 2.0);
  return 0;
}
