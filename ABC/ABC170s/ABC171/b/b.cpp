#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, k;
  cin >> n >> k;
  int ans = 0;
  vector<int> f;
  rep(i, n) {
    int p;
    cin >> p;
    f.push_back(p);
  }
  sort(f.begin(), f.end());
  rep(i, k) ans += f[i];
  cout << ans << endl;
  return 0;
}
