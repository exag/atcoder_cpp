#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  cin >> n;
  ll ans = 0;
  int t = 0;
  rep(i, n) {
    int a;
    cin >> a;
    if (t > a) {
      ans += t - a;
    } else {
      t = a;
    }
  }
  cout << ans << endl;
  return 0;
}
