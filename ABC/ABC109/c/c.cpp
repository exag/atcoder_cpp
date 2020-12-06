#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, x;
  cin >> n >> x;
  vector<int> p(n);
  rep(i, n) cin >> p[i];
  sort(p.begin(), p.end());
  int mn = p[0];
  vector<int> p2(n + 1);
  rep(i, n) p2[i] = p[i] - mn;
  p2[n] = x - mn;
  int g = gcd(p2[0], p2[1]);
  for (int i = 2; i <= n; ++i) {
    g = gcd(g, p2[i]);
  }
  cout << g << endl;
  return 0;
}
