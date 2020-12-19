#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define srep(i, s, n) for (int i = s; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  cin >> n;
  ll sm = 0;
  map<int, ll> cnt;
  rep(i, n) {
    int a;
    cin >> a;
    cnt[a]++;
    sm += a;
  }
  int q;
  cin >> q;
  rep(i, q) {
    ll b, c;
    cin >> b >> c;
    sm -= cnt[b] * b;
    sm += cnt[b] * c;
    cnt[c] += cnt[b];
    cnt[b] = 0;
    cout << sm << endl;
  }
  return 0;
}
