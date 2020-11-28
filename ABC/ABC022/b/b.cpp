#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  cin >> n;
  map<int, int> mp;
  int ans = 0;
  rep(i, n) {
    int a;
    cin >> a;
    if (mp[a] > 0) ans++;
    mp[a]++;
  }
  cout << ans << endl;
  return 0;
}
