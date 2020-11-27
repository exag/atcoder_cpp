#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  map<int, int> mp;
  int p = 1;
  while (true) {
    int m = (a * p) % b;
    if (mp[m] > 0) break;
    mp[m]++;
    p++;
  }
  string ans = "NO";
  if (mp[c] > 0) ans = "YES";
  cout << ans << endl;
  return 0;
}
