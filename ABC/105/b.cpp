#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  cin >> n;
  string ans = "No";
  rep(i, 200) rep(j, 200) {
    if (i * 4 + j * 7 == n) ans = "Yes";
  }
  cout << ans << endl;
  return 0;
}
