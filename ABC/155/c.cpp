#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  cin >> n;
  map<string, int> s;
  rep(i, n) {
    string si;
    cin >> si;
    s[si]++;
  }
  int mx = 0;
  for (auto x : s) {
    mx = max(mx, x.second);
  }
  set<string> ans;
  for (auto x : s) {
    if (x.second == mx) ans.insert(x.first);
  }
  for (auto x : ans) {
    cout << x << endl;
  }

  return 0;
}
