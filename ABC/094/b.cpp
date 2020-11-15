#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, m, x;
  cin >> n >> m >> x;
  map<int, int> a;
  rep(i, m) {
    int ai;
    cin >> ai;
    a[ai]++;
  }
  int ans1 = 0;
  for (int i = x; i < n; ++i) {
    ans1 += a[i];
  }
  int ans2 = 0;
  for (int i = x; i > 0; --i) {
    ans2 += a[i];
  }
  cout << min(ans1, ans2) << endl;
  return 0;
}
