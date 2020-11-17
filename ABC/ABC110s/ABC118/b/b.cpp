#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, m;
  cin >> n >> m;
  map<int, int> mp;
  rep(i, n) {
    int k;
    cin >> k;
    rep(i, k) {
      int ai;
      cin >> ai;
      ai--;
      mp[ai]++;
    }
  }
  int ans = 0;
  rep(i, m) {
    if (mp[i] == n) ans++;
  }
  cout << ans << endl;
  return 0;
}
