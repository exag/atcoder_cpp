#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  int t, a;
  cin >> n >> t >> a;
  int tmp = 1e9;
  int ans;
  rep(i, n) {
    int h;
    cin >> h;
    int diff = abs(1000 * a - 1000 * t + 6 * h);
    if (diff < tmp) {
      ans = i;
      tmp = diff;
    }
  }
  cout << ans + 1 << endl;
  return 0;
}
