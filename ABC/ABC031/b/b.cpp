#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int l, h;
  int n;
  cin >> l >> h >> n;
  rep(i, n) {
    int a;
    cin >> a;
    int ans;
    if (a < l)
      ans = l - a;
    else if (a > h)
      ans = -1;
    else
      ans = 0;
    cout << ans << endl;
  }
  return 0;
}
