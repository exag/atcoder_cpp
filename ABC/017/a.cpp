#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int ans = 0;
  rep(i, 3) {
    int s, e;
    cin >> s >> e;
    ans += s * e;
  }
  cout << ans / 10 << endl;
  return 0;
}
