#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, x;
  cin >> n >> x;
  int ans = 1;
  int pos = 0;
  rep(i, n) {
    int l;
    cin >> l;
    if (pos + l <= x) ans++;
    pos += l;
  }
  cout << ans << endl;
  return 0;
}
