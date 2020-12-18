#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define srep(i, s, n) for (int i = s; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  ll n;
  cin >> n;
  vector<ll> a(n);
  map<ll, ll> cnt;
  rep(i, n) {
    ll ai;
    cin >> ai;
    ai--;
    a[i] = ai;
    cnt[ai]++;
  }
  ll all = 0;
  rep(i, n) all += (cnt[i] * (cnt[i] - 1)) / 2;
  rep(i, n) cout << all - cnt[a[i]] + 1 << endl;
  return 0;
}
