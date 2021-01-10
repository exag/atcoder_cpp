#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define srep(i, s, n) for (int i = s; i < (n); ++i)
#define chmax(x, y) x = max(x, y)
#define chmin(x, y) x = min(x, y)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int N;
  cin >> N;
  int n = (1 << N);
  vector<P> a;
  rep(i, n) {
    int ai;
    cin >> ai;
    a.emplace_back(ai, i);
  }

  while (a.size() > 2) {
    vector<P> w;
    rep(i, a.size()) {
      if (i % 2 != 0) continue;
      if (a[i].first > a[i + 1].first) {
        w.push_back(a[i]);
      } else {
        w.push_back(a[i + 1]);
      }
    }
    a = w;
  }
  sort(a.begin(), a.end());
  cout << a[0].second + 1 << endl;
  return 0;
}
