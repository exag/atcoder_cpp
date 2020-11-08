#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  vector<int> e(3);
  cin >> e[0] >> e[1] >> e[2];
  sort(e.begin(), e.end());
  int ans = (e[0] * e[1]) / 2;
  cout << ans << endl;
  return 0;
}
