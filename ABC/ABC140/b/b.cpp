#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  cin >> n;
  vector<int> a, c;
  rep(i, n) {
    int ai;
    cin >> ai;
    a.push_back(ai - 1);
  }
  int ans = 0;
  rep(i, n) {
    int bi;
    cin >> bi;
    ans += bi;
  }
  rep(i, n - 1) {
    int ci;
    cin >> ci;
    c.push_back(ci);
  }
  rep(i, n) {
    if (i > 0 && a[i - 1] + 1 == a[i]) {
      ans += c[a[i - 1]];
    }
  }
  cout << ans << endl;
  return 0;
}
