#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define repex(i, s, n) for (int i = s; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  string march = "MARCH";
  ll c[5] = {0};
  ll n;
  cin >> n;
  rep(i, n) {
    string s;
    cin >> s;
    rep(j, 5) {
      if (s[0] == march[j]) c[j]++;
    }
  }
  ll ans = 0;
  repex(i, 0, 5) repex(j, i + 1, 5) repex(k, j + 1, 5) {
    ans += c[i] * c[j] * c[k];
  }
  cout << ans << endl;
  return 0;
}
