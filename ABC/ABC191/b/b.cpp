#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define srep(i, s, n) for (int i = s; i < (n); ++i)
#define chmax(x, y) x = max(x, y)
#define chmin(x, y) x = min(x, y)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, x;
  cin >> n >> x;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  int cnt = 0;
  rep(i, n) if (a[i] != x) cout << a[i] << endl;
  return 0;
}
