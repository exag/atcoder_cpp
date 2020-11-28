#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, m;
  cin >> n >> m;
  vector<string> a(n);
  string b;
  rep(i, n) cin >> a[i];
  rep(i, m) {
    string bi;
    cin >> bi;
    b += bi;
  }
  string ans = "No";
  rep(i, n - m + 1) {
    rep(j, n - m + 1) {
      string dist;
      rep(k, m) dist += a[i + k].substr(j, m);
      if (dist == b) ans = "Yes";
    }
  }
  cout << ans << endl;
  return 0;
}
