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
    int a;
    cin >> a;
    mp[a]++;
  }
  int ans = 0;
  for (auto m : mp) {
    if (m.second == 0) continue;
    if (m.second > m.first) ans += m.second - m.first;
    if (m.second < m.first) ans += m.second;
  }
  cout << ans << endl;
  return 0;
}
