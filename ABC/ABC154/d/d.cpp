#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define srep(i, s, n) for (int i = s; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> p(n);
  rep(i, n) cin >> p[i];
  rep(i, n) p[i]++;
  int mx = 0;
  int s = 0;
  queue<int> q;
  rep(i, n) {
    s += p[i];
    q.push(p[i]);
    if (q.size() > k) {
      s -= q.front();  // 先頭の値を取り出し
      q.pop();         // 先頭の値を削除
    }
    if (q.size() == k) mx = max(mx, s);
  }
  double ans = mx;
  ans /= 2;
  printf("%.10f\n", ans);
  return 0;
}
