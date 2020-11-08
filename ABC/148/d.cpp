#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  cin >> n;
  int now = 1;
  int cnt = 0;
  rep(i, n) {
    int a;
    cin >> a;
    if (a == now)
      now++;
    else
      cnt++;
  }
  int ans = cnt;
  if (cnt == n) ans = -1;
  cout << ans << endl;
  return 0;
}
