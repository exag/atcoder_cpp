#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define srep(i, s, n) for (int i = s; i < (n); ++i)
#define chmax(x, y) x = max(x, y)
#define chmin(x, y) x = min(x, y)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  string x;
  cin >> x;
  ll m;
  cin >> m;
  if (x.size() == 1) {
    if (stoi(x) <= m)
      cout << 1 << endl;
    else
      cout << 0 << endl;
    return 0;
  }

  int d = 0;
  for (char c : x) chmax(d, int(c - '0'));
  ll ac = d;
  ll wa = m + 1;
  while (wa - ac > 1) {
    ll wj = (ac + wa) / 2;
    ll v = 0;
    for (char c : x) {
      // v * wjがオーバーフローする可能性があるので、移項して判定する
      // 次のターンのために絶対失敗する値を固定で入れておく
      if (v > m / wj) {
        v = m + 1;
      } else {
        v = v * wj + (c - '0');
      }
    }
    if (v <= m) {
      ac = wj;
    } else {
      wa = wj;
    }
  }
  cout << ac - d << endl;
  return 0;
}
