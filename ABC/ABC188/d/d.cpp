#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define srep(i, s, n) for (int i = s; i < (n); ++i)
#define chmax(x, y) x = max(x, y)
#define chmin(x, y) x = min(x, y)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  ll C;
  cin >> n >> C;
  map<int, ll> events;
  rep(i, n) {
    int a, b, c;
    cin >> a >> b >> c;
    events[a] += c;
    events[b + 1] -= c;
  }
  ll ans = 0;
  ll s = 0;
  int pre = 0;
  for (auto event : events) {
    ans += min(C, s) * (event.first - pre);
    s += event.second;
    pre = event.first;
  }
  cout << ans << endl;
  return 0;
}
