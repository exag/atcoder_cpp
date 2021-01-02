#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define srep(i, s, n) for (int i = s; i < (n); ++i)
#define chmax(x, y) x = max(x, y)
#define chmin(x, y) x = min(x, y)
using namespace std;
using ll = long long;
using P = pair<ll, ll>;

int main() {
  int n;
  cin >> n;
  vector<ll> a(n), b(n);
  rep(i, n) cin >> a[i] >> b[i];
  ll sma = 0;
  rep(i, n) sma += a[i];
  vector<ll> ab;
  rep(i, n) ab.emplace_back(a[i] + a[i] + b[i]);
  sort(ab.rbegin(), ab.rend());
  ll takahashi = -sma;
  rep(i, n) {
    takahashi += ab[i];
    if (takahashi > 0) {
      cout << i + 1 << endl;
      return 0;
    }
  }
  return 0;
}
