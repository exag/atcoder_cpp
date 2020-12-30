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
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  sort(a.rbegin(), a.rend());
  ll ans = 0;
  queue<int> q;
  q.push(a[0]);
  srep(i, 1, n) {
    ans += q.front();
    q.pop();
    q.push(a[i]);
    q.push(a[i]);
  }
  cout << ans << endl;
  return 0;
}
