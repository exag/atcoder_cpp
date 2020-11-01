#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  cin >> n;
  vector<int> d;
  rep(i, n) {
    int di;
    cin >> di;
    d.push_back(di);
  }
  int ans = 0;
  for (int i = 0; i < (n); ++i) {
    for (int j = i; j < (n); ++j) {
      if (i == j) continue;
      ans += d[i] * d[j];
    }
  }
  cout << ans << endl;
  return 0;
}
