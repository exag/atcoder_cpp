#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  cin >> n;
  vector<string> w(n);
  rep(i, n) cin >> w[i];
  map<string, int> mp;
  string ans = "Yes";
  rep(i, n) {
    if (mp[w[i]] > 0) {
      ans = "No";
      break;
    }
    mp[w[i]]++;
  }
  rep(i, n - 1) {
    if (w[i].back() != w[i + 1].front()) {
      ans = "No";
      break;
    }
  }
  cout << ans << endl;
  return 0;
}
