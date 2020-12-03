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
    mp[a - 1]++;
    mp[a]++;
    mp[a + 1]++;
  }
  int ans = 0;
  rep(i, 110000) ans = max(ans, mp[i]);
  cout << ans << endl;
  return 0;
}
