#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  cin >> n;
  map<int, int> mp;
  rep(i, n) {
    int ai;
    cin >> ai;
    mp[ai]++;
  }
  int ans = 0;
  for (auto m : mp) {
    if (m.second % 2 == 1) ans++;
  }
  cout << ans << endl;
  return 0;
}
