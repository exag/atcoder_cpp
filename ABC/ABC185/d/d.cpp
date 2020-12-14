#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define repex(i, s, n) for (int i = s; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> a;
  vector<int> white;
  a.push_back(-1);
  rep(i, m) {
    int ai;
    cin >> ai;
    ai--;
    a.push_back(ai);
  }
  a.push_back(n);
  sort(a.begin(), a.end());
  int k = n;
  rep(i, a.size() - 1) {
    int w = a[i + 1] - a[i] - 1;
    if (w > 0) {
      white.push_back(w);
      k = min(k, w);
    }
  }
  int ans = 0;
  for (int cnt : white) {
    ans += (cnt + k - 1) / k;
  }
  cout << ans << endl;
  return 0;
}
